#include<iostream>
using namespace std;
int main()
{
     int *a;
     unsigned int n,k;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    if(n>0)
    {
    a=new int[n];
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"enter k"<<endl;
    cin>>k;
    for(int j=0;j<k;j++)
    {
        int temp=a[0];
        for(int i=0;i<n;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    }
    else
    {
        cout<<"size is zero";
    }
	return 0;
}
