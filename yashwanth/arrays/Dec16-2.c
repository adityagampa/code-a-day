#include <stdio.h>

int main(void) {
    int a[9]={1,2,3,4,5,6},i,temp,k=10;
    while(k>0)
    {
         temp=a[0];
         for(i=1;i<6;i++)
         {
             a[i-1]=a[i];
         }
         a[i-1]=temp;
         k--;
    }
    for(i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
