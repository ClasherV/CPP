#include <iostream>
using namespace std;
int main()
{
    int Year;
    cout<<"Enter a Year: ";
    cin>>Year;
    if(Year%4==0)
    {
        if(Year%100==0)
        {
            if(Year%400==0)
            {
                cout<<"Entered Year: "<<Year<<" is a Leap Year";
            }
            else
            {
                cout<<"Entered Year: "<<Year<<" is not a Leap Year";
            }
        }
        else
        {
            cout<<"Entered Year: "<<Year<<" is a Leap Year";
        }
    }
    else
    {
        cout<<"Entered Year: "<<Year<<" is not a Leap Year";
    }
    return 0;
}

// O/p 1: Enter a Year: 2000
//        Entered Year: 2000 is a Leap Year
//
// O/p 2: Enter a Year: 1900
//        Entered Year: 1900 is not a Leap Year
//
// O/p 3: Enter a Year: 2016
//        Entered Year: 2016 is a Leap Year
//
// O/p 4: Enter a Year: 2025
//        Entered Year: 2025 is not a Leap Year