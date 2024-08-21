#include <iostream>
using namespace std;
int main()
{
    int n,Factorial=1;;
    cout<<"Enter a Number (Integer only): ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n==0)
        {
            Factorial=0;
            break;
        }
        else
        {
            Factorial*=i;
        }
    }
    if(n<0)
    {
        cout<<"Factorial is not defined for Negative Numbers";
    }
    else
    {
        cout<<"Factorial of n="<<n<<" is: "<<Factorial;
    }
    return 0;
}

// O/p 1: Enter a Number (Integer only): 0
//        Factorial of n=0 is: 1
//
// O/p 2: Enter a Number (Integer only): 1
//        Factorial of n=1 is: 1
//
// O/p 3: Enter a Number (Integer only): 2
//        Factorial of n=2 is: 2
//
// O/p 4: Enter a Number (Integer only): 5
//        Factorial of n=5 is: 120
//
// O/p 5: Enter a Number (Integer only): -5
//        Factorial is not defined for Negative Numbers