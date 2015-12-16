#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"enter the size of square matrix";
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				a[i][j]=0;
			}
			else if(i<j)
			{
				a[i][j]=1;
			}
			else
			{
				a[i][j]=-1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<"\n";
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
	}
}
