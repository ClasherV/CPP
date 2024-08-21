#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout<<endl<<"Enter the Number of Terms in the Series: ";
	cin>>n;
	int Series[n];
	cout<<endl;
	int a=0;
	for(int i=0;i<n;i++)
	{
		Series[a]=pow(2,i);
		a++;
		Series[a]=pow(3,i);
		a++;
	}
	cout<<"Given Series is:\t";
	for(int i=0;i<n;i++)
	{
		cout<<Series[i]<<"\t";
	}
	cout<<endl<<endl;
	int N;
	cout<<"Enter the Nth Number: ";
	cin>>N;
	cout<<endl<<"Nth Term is: "<<Series[N-1]<<endl<<endl;
	return 0;
}