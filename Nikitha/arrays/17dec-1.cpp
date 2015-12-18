#include<iostream>
using namespace std;
int main()
{
     int *x,n;
    do
    {
        cout<<"enter the size of the array"<<endl;
        cin>>n;
    }while(n<3);
    x=new int[n];
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(x[j]<x[i])
            {
                int temp=x[j];
                x[j]=x[i];
                x[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        int a=x[i];
        for(int j=i+1;j<n;j++)
        {
            int b=x[j];
            for(int k=j+1;k<n;k++)
            {
                int c=x[k];
                if((c*c)==((a*a)+(b*b)))
                {
                    cout<<a<<" "<<b<<" "<<c;
                }
            }
        }
    }
	return 0;
}
