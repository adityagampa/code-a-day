#include<iostream>
using namespace std;
void sort(int *a,int n);
void display(int *a,int n);
int main()
{
	int a[]={50,20,50,40,10};
	cout<<"Array before sorting"<<endl;
	display(a,5);
	sort(a,5);
	cout<<"Array after sorting"<<endl;
	display(a,5);
	return 0;
}
void sort(int *a,int n)
{   
    int i=0,p=0;
  
   	while(i<n)
   	{
           if( *(a+i)> *(a+i+1) )
           {
    		    int temp=*(a+i);
    	    	*(a+i)=*(a+i+1);
    	    	*(a+i+1)=temp;
           }
           else
           {
              p++;
              if(p==4)
              {
                  return;
              }
           }
            i++;
           if(i==4)
    	   {
		    i=0;
		    p=0;
		   }
    }
}
void display(int *a,int n)
{
     for(int i=0;i<n;i++)
     {
        cout<<a[i]<<endl;
     }
}
