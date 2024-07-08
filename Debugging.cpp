#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cout<<"Select the One Game ";
    cout<<"Remember you answer is in (0 and 1)only\n";
    cout<<"->Basketball\n";
    cout<<"->Volleyball\n"; 
    cout<<"->Football\n";
    cout<<"->Cricket\n";
    cout<<"->Badminton\n";

    cout<<"\nSection 1\n";
    cout<<"Swimming\n";
    cout<<"Volleyball\n";
    cout<<"Soccer\n";
    cout<<"Tennis\n";
    cout<<"Badminton\n";
    cout<<"Is your Game here: ";
    cin>>a;

    cout<<"\nsection 2\n";
    cout<<"football\n";
    cout<<" Tennis\n";
    cout<<"Cricket\n";
    cout<<"Swimming";
    cout<<"Soccer\n";
    cout<<"Is your Game here: ";
    cin>>b;

    cout<<"\nsection 3\n";
    cout<<"Volleyball\n";
    cout<<"Soccer\n";
    cout<<"Tennis\n";
    cout<<"Swimming\n";
    cout<<"Hockey\n";
    cout<<"Is your Game here: ";
    cin>>c;

    cout<<"\nsection 4\n";
    cout<<"soccer\n";
    cout<<"football\n";
    cout<<"Swimming";
    cout<<" Tennis\n";
    cout<<"Basketball\n";
    cout<<"Is your Game here: ";
    cin>>d;
    
    cout<<"\nsection 5\n";
    cout<<"Basketball\n";
    cout<<"Cricket\n";
    cout<<" Tennis\n";
    cout<<"Swimming\n";
    cout<<"Is your Game here: ";
    cin>>e;
    if(d==1&&e==1)
    {
        cout<<"Your Game is Basketball";
    }
    else if(a==1&&c==1)
    {
        cout<<"Your game is Volleyball";
    }
    else if(b==1&&d==1)
    {
        cout<<"Your Game is Football";
    }
    else if(b==1&&e==1)
    {
        cout<<"Your Game is Cricket";
    }
    else if(a==1)
    {
        cout<<"Your Game is Badminton";
    }
return 0;
}