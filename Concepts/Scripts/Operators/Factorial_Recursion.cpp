#include <iostream>
using namespace std;
int Factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*Factorial(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter a Number (Integer only): ";
    cin>>n;
    if(n<0)
    {
        cout<<"Factorial is not defined for Negative Numbers";
    }
    else
    {
        cout<<"Factorial of n="<<n<<" is: "<<Factorial(n);
    }
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