#include<iostream>
using namespace std;
int main()
{
  int tnum1,tnum2,r,n1,n2,m=1;
  int k=0;
  cout<<"enter table1 and table2 and searchkey and sizeof tb1 and sizeof tb2"<<endl;
  cin>>tnum1>>tnum2>>r>>n1>>n2;
  int a[100],b[100],i;
  for(i=0;i<n1;i++)
  {
     a[i]=tnum1*(i+1);
  }
  for(int j=0;j<n2;j++,i++)
  {
     a[i]=tnum2*(j+1);
  }
     int j=n1;
     for(i=0;i<n1;i++)
     {
        if(a[i]<a[j])
        {
           b[k]=a[i];
           k++;
        }
        else if(a[i]==a[j])
        {
            b[k]=a[i];
            j++;
            k++;
        }
        else
        {
              b[k]=a[j];
              j++;
              k++;
             b[k]=a[i];
             k++;
        }
     }
     for(;i<n1;i++)
     {
        b[k]=a[i];
        k++;
     }
      for(;j<n1+n2;j++)
     {
         b[k]=a[j];
         k++;
     } 
     for(int p=1;p<k;p++)
     {
          if(b[p]!=b[p-1])
          {
             b[m]=b[p];
             m++;
          }
     }
    cout<<"rth eleient si"<<endl;
     if(r<=m)
       cout<<b[r-1]<<endl;
}
