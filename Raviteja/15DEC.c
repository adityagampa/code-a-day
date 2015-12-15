#include <stdio.h>

void display(int a[],int n)
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
}
void misplace(int *a,int n)
{
    int temp,i=0,j=n-1;
    while((a[i]<a[i+1]) && (i<n-1) )
    {
        i++;
    }
    while( (a[j]>a[j-1]) && (j>=0) )
    {
        j--;
    }
    if( (i!=n-1) && (j!=0) )
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}

int main()
{
    int a[]={10,20,30};
    int n=sizeof(a)/sizeof(a[0]);
    printf("\nBefore correcting places\n");
    display(a,n);
    misplace(a,n);
    printf("\nAfter correcting places\n");
    display(a,n);
    return 0;
}
