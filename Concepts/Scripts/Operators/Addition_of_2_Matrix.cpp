#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the Number of Rows: ";
    cin>>m;
    cout<<"Enter the Number of Columns: ";
    cin>>n;
    int arr1[m][n],arr2[m][n];
    cout<<endl<<"Enter the Elements of Matrix 1: \n\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the Array Element at Row "<<i+1<<", Column "<<j+1<<": ";
            cin>>arr1[i][j];
        }
        cout<<"\n";
    }
    cout<<endl<<"Matrix 1 Elements are: \n\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr1[i][j]<<"\t";
        }
        cout<<"\n\n";
    }
    cout<<endl<<"Enter the Elements of Matrix 2: \n\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the Array Element at Row "<<i+1<<", Column "<<j+1<<": ";
            cin>>arr2[i][j];
        }
        cout<<"\n";
    }
    cout<<endl<<"Matrix 2 Elements are: \n\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr2[i][j]<<"\t";
        }
        cout<<"\n\n";
    }
    int Sum[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            Sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    cout<<endl<<"Addition of Matrix 1 and Matrix 2 is: \n\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<Sum[i][j]<<"\t";
        }
        cout<<"\n\n";
    }
    return 0;
}

// O/p: Enter the Number of Rows: 3
//      Enter the Number of Columns: 3
//      
//      Enter the Elements of Matrix 1:
//      
//      Enter the Array Element at Row 1, Column 1: 1
//      Enter the Array Element at Row 1, Column 2: 3
//      Enter the Array Element at Row 1, Column 3: 5
//      
//      Enter the Array Element at Row 2, Column 1: 7
//      Enter the Array Element at Row 2, Column 2: 9
//      Enter the Array Element at Row 2, Column 3: 11
//      
//      Enter the Array Element at Row 3, Column 1: 13
//      Enter the Array Element at Row 3, Column 2: 15
//      Enter the Array Element at Row 3, Column 3: 17
//      
//      
//      Matrix 1 Elements are:
//      
//      1       3       5
//      
//      7       9       11
//      
//      13      15      17
//      
//      
//      Enter the Elements of Matrix 2:
//      
//      Enter the Array Element at Row 1, Column 1: 2
//      Enter the Array Element at Row 1, Column 2: 4
//      Enter the Array Element at Row 1, Column 3: 6
//      
//      Enter the Array Element at Row 2, Column 1: 8
//      Enter the Array Element at Row 2, Column 2: 10
//      Enter the Array Element at Row 2, Column 3: 12
//      
//      Enter the Array Element at Row 3, Column 1: 14
//      Enter the Array Element at Row 3, Column 2: 16
//      Enter the Array Element at Row 3, Column 3: 18
//      
//      
//      Matrix 2 Elements are:
//      
//      2       4       6
//      
//      8       10      12
//      
//      14      16      18
//      
//      
//      Addition of Matrix 1 and Matrix 2 is:
//      
//      3       7       11
//      
//      15      19      23
//      
//      27      31      35
//      