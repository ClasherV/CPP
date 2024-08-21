#include <iostream>
using namespace std;
int Swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a,b;
    cout<<"Enter the Number 1: ";
    cin>>a;
    cout<<"Enter the Number 2: ";
    cin>>b;
    cout<<"Values before Swapping: \n\n";
    cout<<"Value 1: "<<a<<endl;
    cout<<"Value 2: "<<b<<endl<<endl;
    Swap(a,b);
    cout<<"Values after Swapping: \n\n";
    cout<<"Value 1: "<<a<<endl;
    cout<<"Value 2: "<<b<<endl<<endl;
    return 0;
}

// O/p: Enter the Number 1: 10
//      Enter the Number 2: 5
//      Values before Swapping: 
//      
//      Value 1: 10
//      Value 2: 5
//      
//      Values after Swapping:
//      
//      Value 1: 5
//      Value 2: 10
//      