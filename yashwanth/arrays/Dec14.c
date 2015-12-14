#include <stdio.h>

int main(void) {
    int a[9]={0,1,1,1,0,0,1,0},i,j,k,m=0,temp;
    for(i=0;i<8;i++)
    {
        scanf("%d",a[i]);
    }
    for(k=7;k>=4;k--)
    {
        for(j=m;j<k;j++)
        {
            if(a[j]==1&&a[k]==0)
            {
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
                m++;
                break;
            }
        }
    }
    for(i=0;i<8;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}