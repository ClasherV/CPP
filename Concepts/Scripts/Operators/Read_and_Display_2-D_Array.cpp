#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the Number of Rows: ";
    cin>>m;
    cout<<"Enter the Number of Columns: ";
    cin>>n;
    int arr[m][n];
    cout<<endl<<"Enter the Array Elements: \n\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the Array Element at Row "<<i+1<<", Column "<<j+1<<": ";
            cin>>arr[i][j];
        }
        cout<<"\n";
    }
    cout<<endl<<"The Array Elements are: \n\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n\n";
    }
    return 0;
}

// O/p: Enter the Number of Rows: 3
//      Enter the Number of Columns: 3
//      
//      Enter the Array Elements:
//      
//      Enter the Array Element at Row 1, Column 1: 1
//      Enter the Array Element at Row 1, Column 2: 2
//      Enter the Array Element at Row 1, Column 3: 3
//      
//      Enter the Array Element at Row 2, Column 1: 4
//      Enter the Array Element at Row 2, Column 2: 5
//      Enter the Array Element at Row 2, Column 3: 6
//      
//      Enter the Array Element at Row 3, Column 1: 7
//      Enter the Array Element at Row 3, Column 2: 8
//      Enter the Array Element at Row 3, Column 3: 9
//      
//      
//      The Array Elements are:
//      
//      1       2       3
//      
//      4       5       6
//      
//      7       8       9
//      