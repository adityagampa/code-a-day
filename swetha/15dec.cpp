#include <stdio.h>
#include <math.h>
 
void sort( int *a, int n)
{
   int i, j,k;
   for (i = 1; i < n; i++)
   {
       k = a[i];
       j = i-1;
 
       while (j >= 0 && a[j] > k)
       {
           a[j+1] = a[j];
           j = j-1;
       
       a[j+1] = k;
    } 
}

}
  
void display( int *a, int n)
{
   int i;
   for (i=0; i < n; i++)
       printf("%d ", a[i]);
   
}
 
 

int main()
{
   int a[]= {10,40,30,20,50};
   int n =sizeof(a)/sizeof(a[0]);
   int i;
   
   sort(a,n);
   display(a,n);
   
    return 0;
}
