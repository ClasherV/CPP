#include <iostream>
using namespace std;
int Fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}
int main()
{
    int n;
    cout<<"Enter the Number of Terms: ";
    cin>>n;
    cout<<endl<<"Fibonacci Series: ";
    for(int i=0;i<n;i++)
    {
        cout<<Fibonacci(i);
        if(i<n-1)
        {
            cout<<", ";
        }
    }
    return 0;
}

// O/p: Enter the Number of Terms: 6
//      
//      Fibonacci Series: 0, 1, 1, 2, 3, 5