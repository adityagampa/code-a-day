#include <stdio.h>
#define max 10

void display(int a[max][max],int n)
{
    int i,j;
    for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
    {
        printf("%2d",a[i][j]);
    }
    printf("\n");
        }
}

int main()
{
    int n,i,j,a[max][max];
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Array dimension cannot be %d",n);
        return 0;
    }
    for(i=0;i<n;i++)
        a[i][i]=0;
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            a[i][j]=-1;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            a[i][j]=1;
        }
    }
    display(a,n);
    return 0;
}
