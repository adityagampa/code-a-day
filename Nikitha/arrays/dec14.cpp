#include<iostream>
using namespace std;
void sorting(int *a,int n);
bool check(int *a,int n);
int main()
{
	int *a,n;
	cout<<"\n enter the  length of the array \n";
	cin>>n;
	a=new int[n];
	if(n>0)
    {
        cout<<"\n enter the elements in the array \n";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(check(a,n))
        {
        sorting(a,n);
        }
        else
        cout<<"\n invalid elements entered";
    }

    else
        cout<<"size is zero \n";
	return 0;
}
void sorting(int *a,int n)
{
    int count=0;
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

}
bool check(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        if((a[i]!=0)&&(a[i]!=1))
		{
			return false;
        }
    }
    return true;
}
