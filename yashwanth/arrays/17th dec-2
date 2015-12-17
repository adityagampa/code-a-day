#include<stdio.h>
int main()
{
    int a[10]={7,3,6,5,25,8,10,24,4},b[10],i,j,k;
    for(i=0;i<9;i++)
    {
        b[i]=a[i]*a[i];
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<9;j++)
        {
            for(k=j+1;k<9;k++)
            {
                if((b[i]+b[j])==b[k]||(b[j]+b[k])==b[i]||(b[i]+b[k])==b[j])
                {
                    printf("%d %d %d\n",a[i],a[j],a[k]);
                }
            }
        }
    }
    return 0;
}
