#include <stdio.h>
#define max 15

void sort(int a[],int n)
{
    int i,count=0;
    printf("\nArray before sorting: \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    for(i=0;i<n/2;i++)
    {
        if(a[i]==0)
            count++;
        if(a[n-1-i]==0)
            count++;
    }
    if(n%2!=0)
        if(a[n/2]==0)
            count++;
    for(i=0;i<n;i++)
    {
        if(i<count)
            a[i]=0;
        else
            a[i]=1;
    }
    printf("\nArray after sorting: \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}


int main()
{
    int a[]={0,1,0,1,1,1,0,0,0,1,1};
    int n=sizeof(a)/sizeof(int);
    sort(a,n);
    return 0;
}
