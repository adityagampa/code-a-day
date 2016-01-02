#include <stdio.h>
#include <stdlib.h>
int max(int *a,int n)
{
    int max=0,i=0;
    for(;i<n;i++)
    {
        if(max < a[i])
            max=i;
    }
    return max;
}
int minX(int *a,int n,int *b)
{
    int x=0,i=0,j=1,m,count=0;
    m=max(a,n);
    for(i=m;;)
    {
        if(count==n)
            return x;
        if(i==m)
        {
            x=a[m]*j+b[m];
            count=0;
        }
        if(x%a[i]==b[i])
        {
            count++;
            i=(i+1)%n;
            continue;
        }
        else
        {
            j++;
            i=m;
        }
    }
    return x;
}
int main()
{
    int a[]={3,4,5};
    int rem[]={2,3,1};
    int n=sizeof(a)/sizeof(int);
    printf("Min X :%d",minX(a,n,rem));
    return 0;
}
