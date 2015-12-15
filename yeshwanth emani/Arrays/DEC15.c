#include<stdio.h>
#include<stdlib.h>

int *p;
void swap(int,int);
int main()
{
 int n,i,count =0,a,b;
 printf("enter the number of numbers:");
 scanf("%d",&n);
 p = (int*)malloc(n *sizeof(int));
 printf("\n enter the numbers");
 for(i = 0;i<n;i++)
 {
  scanf("%d",&p[i]);

 }
 for(i = 0;i<n-1;i++)
 {
     if(p[i]>p[i+1])
     {
         a = i;
         count++;
         break;
     }

 }
 for(i=a+1;i<n-1;i++)
 {

     if(p[i]>p[i+1])
     {
         b = i+1;
         count++;
         break;
     }
 }
 if(count !=2)
    b = n-1;
 swap(a,b);
 printf("\n");
 for(i =0;i<n;i++)
 {
     printf("%d ",p[i]);
 }
 scanf("&d",i);
return 0;
}
void swap(int x, int y)
{
    int t;
    t = p[x];
    p[x]=p[y];
    p[y]=t;

}

