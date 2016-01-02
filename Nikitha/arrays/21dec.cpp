#include<iostream>
using namespace std;
int main()
{
    int *a,n;
    cout<<"\n enter the number of elements in the array";
    cin>>n;
    a=new int[n+1];
    cout<<"enter the elements in the array";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
            count++;
        if(count==n)
            a[n]=0;
    }

    //sorting the array
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
    int i=0;
    if(count==n)
        {
            if(a[1]-0==2)
                cout<<"0"<<a[1]-1<<endl;
            else if(a[1]-0==0)
                ;
            else if(a[1]-a[0]==1)
                cout<<"0"<<endl;
            else
                cout<<0<<"-"<<a[1]-1<<endl;
            i++;
        }
    for(;i<n;i++)
    {
        if(a[i+1]>100)
        {
            a[i+1]=100;
        }
        if(a[i]<100)
        {
            if(a[i+1]-a[i]==2)
                cout<<a[i]+1<<endl;
            else if(a[i+1]-a[i]==0||a[i+1]-a[i]==1)
                continue;
            else
                cout<<a[i]+1<<"-"<<a[i+1]-1<<endl;
        }
    }
    return 0;
}
