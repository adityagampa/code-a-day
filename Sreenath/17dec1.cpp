#include<iostream>
using namespace std;
void odd(int a[],int n);
void even(int a[],int n);
void prime(int a[],int n);
int main()
{
   int size;
   cout<<"Enter size of array"<<endl;
   cin>>size;
   int a[size];
   if(size)
   {
      cout<<"enter elements of array"<<endl;
      for(int i=0;i<size;i++)
      {
           cin>>a[i];
      }
   }
	even(a,size);
	odd(a,size);
	prime(a,size);
	
}
void even(int a[],int n)
{
    int k=0,even[n];
    cout<<"even numbers are"<<endl;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
           even[k]=a[i];
           cout<<even[k]<<endl;
              k++;
        }
    }
}
void odd(int a[],int n)
{
    cout<<"odd numbers are"<<endl;
    int k=0,odd[n];
    for(int i=0; i<n; i++)
    {
        if(a[i]%2!=0)
        {
           odd[k]=a[i];
           cout<<odd[k]<<endl;
           k++;
        }
    }
}
void prime(int a[],int n)
{
     int flag=0,prime[n],k=0;
      for(int i=0; i<n; i++)
      {
        if(a[i]==2)
        {
           flag=1;
        }
        else
        {
           for(int j=2;j<=a[i]/2;j++)
           {
               if(a[i]%j==0)
               {
                    flag=0;
                    break;
               }
               flag=1;
           }
        }
           if(flag==1)
		   {
		           prime[k]=a[i];
		           k++;
		   }
      }
      if(k>0)
      { 
         cout<<"prime numbers are"<<endl;
         for(int i=0;i<k;i++)
         {
            cout<<prime[i]<<endl;
         }
      }
      else if(k==0)
	  {
	    int nonprime;
         cout<<"selecting a nonprime number from array to find nearest prime"<<endl;
		 cin>>nonprime;
		 int found=0;
		 for(int i=0;i<n;i++)
		 {
		     if(nonprime==a[i])
		     {
		         found=1;
		     }
		 }
		 if(!found)
		 {
		    cout<<"element is not present in array"<<endl;
		    return;
		 }
		 int count;
	    for(int i=1;i<4;i++)
	    {
		   if(i<=nonprime)
		   { 
		    int npinc;
		    npinc=nonprime+i;
		       int flag=1;
                 for(int j=2;j<=npinc/2;j++)
               	 {
	                 if(npinc%j==0)
	                 {
	                    flag=0;
		               break;
	                 }
               	 }   
               	if(flag==1)
            	{
             	   cout<<npinc<<endl;
             	   count++;
             	
             	} 
             	
		   }
		   if(i<nonprime)
		   {
		       int npdec=nonprime-i;
		         int flag=1;
                 for(int j=2;j<=npdec/2;j++)
               	 {
	                 if(npdec%j==0)
	                 {
	                    flag=0;
		               break;
	                 }
               	 }   
               	if(flag==1)
            	{
             	   cout<<npdec<<endl;
             	   count++;
             	   
             	} 
             	if(count==1||2)
             	{
             	   break;
             	}
             	
	      }
	   }	   
     }
}
	
			 
			
			
			
			
			
			
			      
    

