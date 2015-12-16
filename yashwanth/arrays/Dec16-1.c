#include <stdio.h>

int main(void) {
 int i,j,a[5][5],n=4;
 for(i=0;i<n;i++)
 {
     for(j=0;j<n;j++)
     {
         if(i==j)
         {
             a[i][j]=0;
         }
         else if(i>j)
         {
             a[i][j]=-1;
         }
         else
         {
             a[i][j]=1;
         }
     }
 }
 for(i=0;i<n;i++)
 {
     for(j=0;j<n;j++)
     {
        printf("%d\t",a[i][j]);
     }
     printf("\n");
 }
 return 0;
}
