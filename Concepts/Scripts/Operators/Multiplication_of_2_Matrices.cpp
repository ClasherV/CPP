#include <iostream>
using namespace std;
int main()
{
    int m,n,p,q;
    do
    {
        cout<<"Enter the Number of Rows for Matrix 1: ";
        cin>>m;
        cout<<"Enter the Number of Columns for Matrix 1: ";
        cin>>n;
        cout<<"Enter the Number of Rows for Matrix 2: ";
        cin>>p;
        cout<<"Enter the Number of Columns for Matrix 2: ";
        cin>>q;
        if(n!=p)
        {
            cout<<endl<<"Number of Columns of Matrix 1 should be Equal to the Number of Rows of Matrix 2\n\n";
        }
    }while(n!=p);
    int arr1[m][n],arr2[p][q];
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
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<"Enter the Array Element at Row "<<i+1<<", Column "<<j+1<<": ";
            cin>>arr2[i][j];
        }
        cout<<"\n";
    }
    cout<<endl<<"Matrix 2 Elements are: \n\n";
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<arr2[i][j]<<"\t";
        }
        cout<<"\n\n";
    }
    int Multiplication[m][q];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            int Sum=0;
            for(int k=0;k<n;k++)
            {
                Sum+=arr1[i][k]*arr2[k][j];
            }
            Multiplication[i][j]=Sum;
        }
    }
    cout<<endl<<"Multiplication of Matrix 1 and Matrix 2 is: \n\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<Multiplication[i][j]<<"\t";
        }
        cout<<"\n\n";
    }
    return 0;
}

// O/p : Enter the Number of Rows for Matrix 1: 3
//       Enter the Number of Columns for Matrix 1: 2
//       Enter the Number of Rows for Matrix 2: 3
//       Enter the Number of Columns for Matrix 2: 2
//       
//       Number of Columns of Matrix 1 should be Equal to the Number of Rows of Matrix 2
//       
//       Enter the Number of Rows for Matrix 1: 3
//       Enter the Number of Columns for Matrix 1: 3
//       Enter the Number of Rows for Matrix 2: 3
//       Enter the Number of Columns for Matrix 2: 2
//       
//       Enter the Elements of Matrix 1:
//       
//       Enter the Array Element at Row 1, Column 1: 1
//       Enter the Array Element at Row 1, Column 2: 2
//       Enter the Array Element at Row 1, Column 3: 3
//       
//       Enter the Array Element at Row 2, Column 1: 4
//       Enter the Array Element at Row 2, Column 2: 5
//       Enter the Array Element at Row 2, Column 3: 6
//       
//       Enter the Array Element at Row 3, Column 1: 7
//       Enter the Array Element at Row 3, Column 2: 8
//       Enter the Array Element at Row 3, Column 3: 9
//       
//       
//       Matrix 1 Elements are:
//       
//       1       2       3
//       
//       4       5       6
//       
//       7       8       9
//       
//       
//       Enter the Elements of Matrix 2:
//       
//       Enter the Array Element at Row 1, Column 1: 1
//       Enter the Array Element at Row 1, Column 2: 2
//       
//       Enter the Array Element at Row 2, Column 1: 3
//       Enter the Array Element at Row 2, Column 2: 4
//       
//       Enter the Array Element at Row 3, Column 1: 5
//       Enter the Array Element at Row 3, Column 2: 6
//       
//       
//       Matrix 2 Elements are:
//       
//       1       2
//       
//       3       4
//       
//       5       6
//       
//       
//       Multiplication of Matrix 1 and Matrix 2 is:
//       
//       22      28
//       
//       49      64
//       
//       76      100
//       