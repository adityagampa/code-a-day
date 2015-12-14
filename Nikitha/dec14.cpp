#include<iostream>
using namespace std;
int main()
{
	int *a,n,count=0;
	cout<<"\n enter the  length of the array \n";
	cin>>n;
	a=new int[n];
    cout<<"\n enter the elements in the array \n";
	LOOP:for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if((a[i]!=0)&&(a[i]!=1))
		{
			cout<<"\n enter only 0's or 1's";
			cout<<"\n enter your elements again";
            goto LOOP;
		}
    }
	// sort
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			count++;
			a[i]=1;
		}
	}
	for(int i=0;i<count;i++)
	{
		a[i]=0;
	}
	cout<<"\n the sorted array is \n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
