#include <stdio.h>
int main()
{
    int a[100],b[100],c[100],n1,n2,r,i,j=0,k=0,l=0,m=0;
    printf("enter the values of n1 \t n2\t r\t");
    scanf("%d %d %d",&n1,&n2,&r);
    for(i=1;i<r;i++)
    {
        a[j]=n1*i;
        j++;
    }
    for(i=1;i<r;i++)
    {
        b[k]=n2*i;
        k++;
    }
    for(i=0;i<2*r;i++)
    {
        if(a[m]<b[l])
        {
		c[i]=a[m];
		m++;
	   }
	   else if(a[m]>b[l])
	   {
		c[i]=b[l];
		l++;
        }
        else
	  {
		c[i]=a[m];
		l++;
		m++;
       }
    }
    printf("\n");
    printf("%dth element is: %d ",r,c[r-1]);
    return 0;
}
