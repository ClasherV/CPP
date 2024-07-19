#include<iostream>
using namespace std;
int main()
{
    char full_name[20];
    cout<<"Enter your Name: ";
    cin.getline(full_name,20);
    cout<<"Your Name is: "<< full_name;
    return 0;
}