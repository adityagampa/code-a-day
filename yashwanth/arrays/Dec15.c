#include <stdio.h>

int main(void) {
    int a[]={50,20,30,40,10},i,j,k,m=0,temp,count;
    for(i=0;i<5;i++)
    {
        if(a[i]<a[i+1])
        {
            m++;
        }
        else if(a[i]>a[i+1])
        {
            j=i;
            break;
        }
    }
    for(count=m+1;m<5;count++)
    {
        if(a[count]>a[count+1])
        {
            k=count+1;
            break;
        }
    }
    temp=a[j];
    a[j]=a[k];
    a[k]=temp;
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
