#include <iostream>
using namespace std;
int main()
{
    int n,Term1=0,Term2=1,NextTerm=0;
    cout<<"Enter the Number of Terms: ";
    cin>>n;
    cout<<endl<<"Fibonacci Series: "<<Term1<<", "<<Term2<<", ";
    for(int i=1;i<=n-2;i++)
    {
        NextTerm=Term1+Term2;
        cout<<NextTerm;
        if(i<n-2)
        {
            cout<<", ";
        }
        Term1=Term2;
        Term2=NextTerm;
    }
    return 0;
}

// O/p: Enter the Number of Terms: 5
//      
//      Fibonacci Series: 0, 1, 1, 2, 3