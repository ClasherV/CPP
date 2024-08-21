#include <iostream>
using namespace std;
int main()
{
    int n,Sum=0;
    cout<<"Enter a Number: ";
    cin>>n;
    int temp=n;
    while(temp!=0)
    {
        Sum+=temp%10;
        temp/=10;
    }
    cout<<"Sum of n="<<n<<" Digits is: "<<Sum;
    return 0;
}

// O/p: Enter a Number: 12345
//      Sum of n=12345 Digits is: 15