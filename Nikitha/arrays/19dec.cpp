#include<iostream>
using namespace std;
void sumpairs(int *a,int n,int r);
bool check(int *a,int n);
int main()
{
	unsigned int n;
	cout<<"\nenter the number of elements in the array\n";
	cin>>n;
	if(n>0)
	{
	    int r;
	    cout<<"enter the sum number\n";
	    cin>>r;
	    int *a=new int[n];
		cout<<"\nenter the elements in the array\n";
		for(int i=0;i<n;i++)
            cin>>a[i];
        if(check(a,n))
        {
          // sorting the array
            for(int k=0;k<n;k++)
            {
                for(int j=0;j<n;j++)
                {
                    if(a[j+1]<a[j])
                    {
                        int temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
            }
            // removing duplicate elements
            for(int i=0;i<n;i++)
            {
                if(a[i]==a[i+1])
                {
                    for (int x=i;x<n;x++)
                        a[x]=a[x+1];
                    n--;
                }
            }

          sumpairs(a,n,r);
        }
        else
            cout<<"no negative elements allowed\n";
    }
    else
        cout<<"size is zero\n";

	return 0;
}
void sumpairs(int *a,int n,int r)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]<=r)
        {
            if(a[i]+a[i]==r)
            {
                cout<<a[i]<<","<<a[i]<<endl;
            }
            for(int j=i+1;j<n;j++)
            {
                if(a[j]<=r)
                {
                     if(a[i]+a[j]==r)
                    {
                        cout<<a[i]<<","<<a[j]<<endl;
                        cout<<a[j]<<","<<a[i]<<endl;
                    }
                }
            }
        }
    }
}

bool check(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            return false;
        }
    }
    return true;
}
