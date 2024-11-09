// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int flag=0;
//     vector<int> n={1,3,5,6};
//     for(auto num:n)
//     {
//         if(num%3==0||num%5==0)
//         {
//             flag++;
//         }
//     }
//     cout<<flag;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> numbers;
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
//     numbers.push_back(1);
//     cout<<numbers.size()<<"\t";
//     cout<<numbers.capacity()<<endl<<endl;
// }

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<bool> numbers(10);
    fill(numbers.begin(),numbers.end(),false);
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<endl;
    }
}