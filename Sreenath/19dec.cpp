#include<iostream>
using namespace std;
int main()
{
   int size,sum;
   cout<<"enter size of arraay";
   cin>>size;
   int a[size],b[size];
   cout<<"enter elements of the array";
   for(int i=0;i<size;i++)
   {
      cin>>a[i];
   }
   cout<<"enter sum value";
   cin>>sum;
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
	    k++;
      }
   }
   for(int i=0;i<size;i++)
   {
       for(int j=0;j<size;j++)
       {
           if(b[i]+b[j]==sum)
           {
               cout<<"("<<a[i]<<","<<b[j]<<")";
           }
       }
   }
   return 0;
}
