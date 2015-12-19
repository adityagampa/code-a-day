#include<stdio.h>
int main()
{
  int a[]={0,1,1,1,0,0,1,0},i,count=0;
  for(i=0;i<8;i++)
  {
     if(a[i]==0)
     {
        count++;
     }
  }
  for(i=0;i<count;i++)
  {
     printf("%d",0);
  }
  for(i=count;i<8;i++)
  {
  	printf("%d",1);
  }
  return 0;
}
