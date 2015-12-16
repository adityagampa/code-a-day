#include <stdio.h>

void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
}

int main()
{
    int a[]={1,2,4,5,2};
    int i,k,temp,n=sizeof(a)/sizeof(a[0]);
    printf("\nEnter the rotation factor : ");
    scanf("%d",&k);
    k%=n;
    printf("\nBefore applying rotation\n");
    display(a,n);
    while(k>0)
    {
        temp=a[0];
        for(i=0;i<n;i++)
            a[i]=a[i+1];
        a[i]=temp;
        k--;
    }
    printf("\nAfter applying rotation\n");
    display(a,n);
    return 0;
}
