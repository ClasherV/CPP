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
    cout<<endl<<"Transpose of the above Matrix is: \n\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[j][i]<<"\t";
        }
        cout<<"\n\n";
    }
    return 0;
}

// O/p: Enter the Number of Rows: 3
//      Enter the Number of Columns: 2
//      
//      Enter the Array Elements:
//      
//      Enter the Array Element at Row 1, Column 1: 1
//      Enter the Array Element at Row 1, Column 2: 2
//      
//      Enter the Array Element at Row 2, Column 1: 3
//      Enter the Array Element at Row 2, Column 2: 4
//      
//      Enter the Array Element at Row 3, Column 1: 5
//      Enter the Array Element at Row 3, Column 2: 6
//      
//      
//      The Array Elements are: 
//      
//      1       2
//      
//      3       4
//      
//      5       6
//      
//      
//      Transpose of the above Matrix is:
//      
//      1       3       5
//      
//      2       4       6
//      