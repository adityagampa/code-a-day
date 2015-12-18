#include <stdio.h>
#include <stdlib.h>
int kthMergedIndex(int m,int n,int r)
{
    int i=0,j=1,l=1,flag=1;
    if(n==0 || m==0)
        return 0;
    for(i=0;i<r;i++)
    {
        if(m*j > n*l)
        {
            l++;
            flag=0;
        }
        else if(m*j < n*l)
        {
            j++;
            flag=1;
        }
        else
        {
            j++;
            l++;
        }
    }
    return flag ? m*(j-1) : n*(l-1);
}
int main()
{
    printf("R : %d",kthMergedIndex(5,4,10));
    return 0;
}
