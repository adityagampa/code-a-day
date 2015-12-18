#include <stdio.h>

int main()
{
    int a[100],b[100],c[100],d[100],i,j=0,k=0,l=0,temp,r=8,p=0;
    for(i=1;i<11;i++)
    {
        a[j]=5*i;
        j++;
    }
    for(i=1;i<11;i++)
    {
        b[k]=3*i;
        k++;
    }
    for(i=0;i<j;i++)
    {
           c[l]=a[i];
           l++;
           c[l]=b[i];
        l++;
    }
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
          if(c[i]>c[j])  
          {
              temp=c[i];
              c[i]=c[j];
              c[j]=temp;
          }
        }
    }
    for(i=0;i<l;i++)
    {
            if(c[i]==c[i+1])
            {
                continue;
            }
            else
            {
                d[p]=c[i];
                p++;
            }
    }
    for(i=0;i<p;i++)
    {
        printf("%d ",d[i]);
    }
    printf("\n");
    printf("%dth element is: %d ",r,d[r-1]);
    return 0;
}
