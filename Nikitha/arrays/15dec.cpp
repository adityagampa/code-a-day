#include<iostream>
using namespace std;
int main()
{
    int *a,n,x;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    if(n>0)
    {
    a=new int[n];
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<n;j++)
    {
        for(int i=j+1;i<n;i++)
        {
            if(a[i-1]>a[i])
            {
                x=a[i-1];
                a[i-1]=a[i];
                a[i]=x;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    }
    else
        cout<<"size is zero";
	return 0;
}

