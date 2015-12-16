#include<iostream>
using namespace std;
void display(int *a,int n);
int main()
{
	int k,temp,l;
	cout<<"enter the length of array\n";
	cin>>k;
	int a[k],i,j;
	cout<<"enter array elements\n";
	for(i=0;i<k;i++)
	{
		cin>>a[i];	
	}
	cout<<"\nenter the number of right turns";
	cin>>j;
	cout<<"\n before sorting\n";
	display(a,k);
		for(l=0;l<j;l++)
		{
			temp=a[0];
		for(i=0;i<k-1;i++)
		{
			
			a[i]=a[i+1];
		}
		a[k-1]=temp;
		}
	cout<<"\nafter sorting\n";
	display(a,k);
	
}
void display(int *a,int n)
{
	int i=0;
	for(;i<n;i++)
	{
		cout<<a[i]<<"\n";
	}
}
