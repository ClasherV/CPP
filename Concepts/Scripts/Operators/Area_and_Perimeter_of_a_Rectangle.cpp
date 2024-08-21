#include <iostream>
using namespace std;
int main()
{
    float Length,Breadth;
    cout<<"Enter Length of the Rectangle (in cm): ";
    cin>>Length;
    cout<<"Enter Breadth of the Rectangle (in cm): ";
    cin>>Breadth;
    float Area=Length*Breadth;
    float Perimeter=2*(Length+Breadth);
    cout<<"\nArea of a Rectangle of Length: "<<Length<<"cm,"<<endl;
    cout<<"Breadth: "<<Breadth<<"cm,"<<endl;
    cout<<"is: "<<Area<<"cm"<<endl<<endl;
    cout<<"Perimeter of a Rectangle of Length: "<<Length<<"cm,"<<endl;
    cout<<"Breadth: "<<Breadth<<"cm,"<<endl;
    cout<<"is: "<<Perimeter<<"cm"<<endl<<endl;
    return 0;
}

// O/p: Enter Length of the Rectangle (in cm): 15
//      Enter Breadth of the Rectangle (in cm): 20
//      
//      Area of a Rectangle of Length: 15cm,
//      Breadth: 20cm,
//      is: 300cm
//      
//      Perimeter of a Rectangle of Length: 15cm,
//      Breadth: 20cm,
//      is: 70cm
//      