#include<iostream>
using namespace std;
int main()
{
    int n1,n2,r;
    cout<<"\n enter n1";
    cin>>n1;
    cout<<"\n enter n2 other than n1";
    cin>>n2;
    cout<<"\n enter r";
    cin>>r;
    int i=2,j=2;
    int *a=new int[r];
    if(n1>n2)
    {
        int temp=n2;
        n2=n1;
        n1=temp;
    }
    a[0]=n1;
    a[1]=n2;
    while(j<r)
    {
        a[j]=n1*i;j++;
        int num=n2*i;
        if(num%n1!=0)
        {
            a[j]=num;
            j++;
        }
        i++;
    }
    for(int k=0;k<r;k++)
    {
        for(int j=k+1;j<r;j++)
        {
            if(a[k]>a[k+1])
            {
                int temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
    cout<<"merged table \n";
    for(int k=0;k<r;k++)
        cout<<a[k]<<" ";
    cout<<"\n rth number in merged table is \n";
    cout<<a[r-1];
	return 0;
}
