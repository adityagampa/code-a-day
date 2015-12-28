#include<stdio.h>
void display(int*a,int n);
int i;
int main()
{
   int a[]={10,20,30,40,50},krotations,temp;
   int nloarray=sizeof(a)/sizeof(a[0]);
   printf("Enter no.of k rotations");
   scanf("%d",&krotations);
   while(krotations>0)
   {
      temp=a[0];
      for(i=1;i<nloarray;i++)
      {
         a[i-1]=a[i];
      }
      a[i-1]=temp;
      krotations--;
   }
   display(a,5);
}
void display(int*a,int n)
{
    printf("output is");
    for(i=0;i<n;i++)
    {
       
       printf("\n%d",a[i]);
    }
}
