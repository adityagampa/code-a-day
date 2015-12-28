#include<iostream>
using namespace std;
int main()
{
   int a[100],b[100],size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<size;i++)
    {
       cin>>a[i];
    }
    int k=0;
    for(int i=0;i<size;i++)
    {
       for(int j=0;j<100;j++)
       {
          if(a[i]==j)
          {
            b[k]=a[i];
            k++;
          }
       }
    }
    for(int i=0;i<k;i++)
    {
       for(int j=1;j<k;j++)
       {
          if(b[j]<b[j-1])
          {
             int temp=b[j];
             b[j]=b[j-1];
             b[j-1]=temp;
          }
       }
    }
    int m=0;
    for(int i=0;i<k;i++)
    {
       if(b[i]!=b[i+1])
       {
          b[m]=b[i];
          m++;
       }
    }
    if(b[0]==1)
    {
       cout<<"0"<<endl;
    }
    if(b[0]>1)
    {
      cout<<0<<"-"<<b[0]-1<<endl;
    }
    for(int i=0;i<m-1;i++)
    {
      if(b[i]+1==b[i+1])
      {
      }
      if(b[i]+2==b[i+1])
      {
         cout<<b[i]+1<<endl;
      }
      else
      {
         cout<<b[i]+1<<"-"<<b[i+1]-1<<endl;
      }
    }
    if(b[m-1]==98)
    {
       cout<<"99"<<endl;
    }
    else
    {
       cout<<b[m-1]+1<<"-"<<"99";
    }
    return 0;
}
