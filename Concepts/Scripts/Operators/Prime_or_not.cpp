#include <iostream>
using namespace std;
int main()
{
    int n,Factors=0;
    cout<<"Enter a Number (Integer only): ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            Factors++;
        }
    }
    if(n==0||n==1)
    {
        cout<<"Entered Number: "<<n<<" is neither Prime nor a Composite Number";
    }
    else if(Factors>2)
    {
        cout<<"Entered Number: "<<n<<" is not a Prime Number";
    }
    else
    {
        cout<<"Entered Number: "<<n<<" is a Prime Number";
    }
    return 0;
}

// O/p 1: Enter a Number (Integer only): 0
//        Entered Number: 0 is neither Prime nor a Composite Number
//
// O/p 2: Enter a Number (Integer only): 1
//        Entered Number: 1 is neither Prime nor a Composite Number
//
// O/p 3: Enter a Number (Integer only): 2
//        Entered Number: 2 is a Prime Number
//
// O/p 4: Enter a Number (Integer only): 4
//        Entered Number: 4 is not a Prime Number