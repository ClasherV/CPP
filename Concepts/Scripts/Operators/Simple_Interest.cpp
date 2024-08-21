#include <iostream>
using namespace std;
int main()
{
    int PrincipalAmount;
    float RateOfInterest,AmountOfTime;
    cout<<"Enter the Principal Amount (in Rs.): ";
    cin>>PrincipalAmount;
    cout<<"Enter the Rate of Interest per (in %): ";
    cin>>RateOfInterest;
    cout<<"Enter the Amount of Time (in Years): ";
    cin>>AmountOfTime;
    float SimpleInterest=(PrincipalAmount*RateOfInterest*AmountOfTime)/100;
    cout<<endl<<"The Simple Interest Calculated of given Principal Amount: "<<PrincipalAmount<<" Rs.,"<<endl;
    cout<<"Rate of Interest per Annum: "<<RateOfInterest<<"% per Annum &"<<endl;
    cout<<"Amount of Time: "<<AmountOfTime<<" Years,"<<endl;
    cout<<"is: "<<SimpleInterest;
    return 0;
}

// O/p: Enter the Principal Amount (in Rs.): 1000
//      Enter the Rate of Interest per (in %): 5
//      Enter the Amount of Time (in Years): 2
//      
//      The Simple Interest Calculated of given Principal Amount: 1000 Rs.,
//      Rate of Interest per Annum: 5% per Annum &
//      Amount of Time: 2 Years,
//      is: 100