#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how much Elements You want to Store in the Array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the Array Elements: \n\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the Element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"\nThe Array Elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}

// O/p: Enter how much Elements You want to Store in the Array: 5
//      
//      Enter the Array Elements:
//      
//      Enter the Element 1: 2
//      Enter the Element 2: 4
//      Enter the Element 3: 6
//      Enter the Element 4: 8
//      Enter the Element 5: 10
//      
//      The Array Elements are: 2       4       6       8       10