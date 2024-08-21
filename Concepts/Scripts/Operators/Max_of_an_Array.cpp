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
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<"\n\nMaximum Number from the above Array is: "<<max;
    return 0;
}

// O/p: Enter how much Elements You want to Store in the Array: 5
//      
//      Enter the Array Elements:
//      
//      Enter the Element 1: 2
//      Enter the Element 2: 1
//      Enter the Element 3: 6
//      Enter the Element 4: 4
//      Enter the Element 5: 5
//      
//      The Array Elements are: 2       1       6       4       5
//      
//      Maximum Number from the above Array is: 6