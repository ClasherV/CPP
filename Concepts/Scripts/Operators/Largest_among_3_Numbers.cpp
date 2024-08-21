#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter the Number 1: ";
    cin>>num1;
    cout<<"Enter the Number 2: ";
    cin>>num2;
    cout<<"Enter the Number 3: ";
    cin>>num3;
    if(num1>num2&&num1>num3)
    {
        cout<<"Number 1: "<<num1<<" is the Largest among 3 Numbers: "<<num1<<", "<<num2<<", "<<num3;
    }
    else if(num2>num3)
    {
        cout<<"Number 2: "<<num2<<" is the Largest among 3 Numbers: "<<num1<<", "<<num2<<", "<<num3;
    }
    else
    {
        cout<<"Number 3: "<<num3<<" is the Largest among 3 Numbers: "<<num1<<", "<<num2<<", "<<num3;
    }
    return 0;
}

// O/p 1: Enter the Number 1: 10
//        Enter the Number 2: 8
//        Enter the Number 3: 6
//        Number 1: 10 is the Largest among 3 Numbers: 10, 8, 6
//
// O/p 2: Enter the Number 1: 10
//        Enter the Number 2: 6
//        Enter the Number 3: 8
//        Number 1: 10 is the Largest among 3 Numbers: 10, 6, 8
//
// O/p 3: Enter the Number 1: 6
//        Enter the Number 2: 10
//        Enter the Number 3: 8
//        Number 2: 10 is the Largest among 3 Numbers: 6, 10, 8
//
// O/p 4: Enter the Number 1: 8
//        Enter the Number 2: 10
//        Enter the Number 3: 6
//        Number 2: 10 is the Largest among 3 Numbers: 8, 10, 6
//
// O/p 5: Enter the Number 1: 6 
//        Enter the Number 2: 8
//        Enter the Number 3: 10
//        Number 3: 10 is the Largest among 3 Numbers: 6, 8, 10
//
// O/p 6: Enter the Number 1: 8
//        Enter the Number 2: 6
//        Enter the Number 3: 10
//        Number 3: 10 is the Largest among 3 Numbers: 8, 6, 10