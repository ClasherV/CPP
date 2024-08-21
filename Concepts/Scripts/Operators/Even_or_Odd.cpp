#include <iostream>
using namespace std;
int main()
{
    int Number;
    cout<<"Enter a Number (Integer only): ";
    cin>>Number;
    if(Number==0)
    {
        cout<<"Entered Number: "<<Number<<" is neither Even Number nor an Odd Number";
    }
    else if(Number%2==0)
    {
        cout<<"Entered Number: "<<Number<<" is an Even Number";
    }
    else
    {
        cout<<"Entered Number: "<<Number<<" is an Odd Number";
    }
    return 0;
}

// O/p 1: Enter a Number (Integer only): 0
//        Entered Number: 0 is neither Even Number nor an Odd Number
//
// O/p 2: Enter a Number (Integer only): 2
//        Entered Number: 2 is an Even Number
//
// O/p 3: Enter a Number (Integer only): 5
//        Entered Number: 5 is an Odd Number