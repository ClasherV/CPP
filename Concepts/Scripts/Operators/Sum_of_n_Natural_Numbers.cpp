#include <iostream>
using namespace std;
int main()
{
    int n,Sum=0;
    cout<<"Enter the Number of Terms: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        Sum+=i;
    }
    cout<<"\nSum of n="<<n<<" Natural Numbers is: "<<Sum;
    return 0;
}

// O/p: Enter the Number of Terms: 5
//      
//      Sum of n=5 Natural Numbers is: 15