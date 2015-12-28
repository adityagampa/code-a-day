#include<iostream>
using namespace std;
#include<math.h>
int main()
{
   int size;
   cout<<"enter size of array"<<endl;
   cin>>size;
   int a[size],b[size];
   
    if(size<3)
   {
      cout<<"No pythagorean triplets found"<<endl;
      return 0;
   }
   else
   {
     cout<<"enter elements of the array"<<endl;
      for(int i=0;i<size;i++)
      {
        cin>>a[i];
      }
   }
   int k=0;
   for(int i=0;i<size;i++)
   { 
      int flag=0; 
      for(int j=i+1;j<size;j++)
      {
		   if(a[i]==a[j])
		   {
		      flag=1;
		   }
	  }
	  if(flag==0)
	  {
	    b[k]=a[i];
	    cout<<b[k]<<endl;
	    k++;
      }
   }
  for(int i=0;i<k;i++)
  {
     a[i]=b[i]*b[i];
    // cout<<a[i]<<endl;
  }
  cout<<"pythagorean triplets are"<<endl;
  for(int i=0;i<k;i++)
  {
    for(int j=i+1;j<k;j++)
    {
       for(int l=0;l<k;l++)
       {
              if(a[l]==(a[i]+a[j]))
              {
                   
                   cout<<b[i]<<","<<b[j]<<","<<b[l];
              }
       }
    }
  }
 
}
