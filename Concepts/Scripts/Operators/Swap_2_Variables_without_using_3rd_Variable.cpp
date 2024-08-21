#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the Value of First Variable: ";
    cin>>a;
    cout<<"Enter the Value of Second Variable: ";
    cin>>b;
    cout<<endl<<"Values of the Variables before Swapping: \n\n";
    cout<<"First Variable: "<<a<<endl;
    cout<<"Second Variable: "<<b<<endl<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Values of the Variables after Swapping: \n\n";
    cout<<"First Variable: "<<a<<endl;
    cout<<"Second Variable: "<<b<<endl<<endl;
    return 0;
}

// O/p: Enter the Value of First Variable: 10
//      Enter the Value of Second Variable: 5
//      
//      Values of the Variables before Swapping:
//      
//      First Variable: 10
//      Second Variable: 5
//      
//      Values of the Variables after Swapping:
//      
//      First Variable: 5
//      Second Variable: 10
//      