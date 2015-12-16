#include<iostream>
using namespace std;
void sort1(int *a,int n);
void display(int *a,int n);
int main()
{
	int a[5]={10,50,30,40,20};
	cout<<"\nbefore sorting";
	display(a,5);
	sort1(a,5);
}
void sort1(int *a,int n)
{
	int i=0,j,temp;
	for(;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			break;
		}
	}
	if(i<n)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[j]>a[j+1]))
			{
				temp=a[j+1];
				a[j+1]=a[i];
				a[i]=temp;
			}
		}
	}
	cout<<"\nafter sorting";
	display(a,5);	
}
void display(int *a,int n)
{
	int k=0;
	for(;k<n;k++)
	{
		cout<<"\n"<<a[k];
	}
}


