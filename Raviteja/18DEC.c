#include <stdio.h>

int findkey(int n1,int n2,int k)
{
    int i=1,j=1,f;
    while(k)
    {
        if( (n1*i)<(n2*j))
        {
            i++;f=0;
        }
        else if( (n1*i)>(n2*j) )
        {
            j++;f=1;
        }
        else
        {
            i++;
            j++;
        }
        k--;
    }
    if(f)
        return n2*(j-1);
    return n1*(i-1);
}

int main()
{
    int n1,n2,k;
    printf("\nEnter the table values and index(starts from 1) need to find : ");
    scanf("%d%d%d",&n1,&n2,&k);
    if( (n1==0) || (n2==0) || (k==0) )
    {
        printf("values cannot be zero");
        return 0;
    }
    printf("\nThe element at index %d in merged table of %d,%d is %d",k,n1,n2,findkey(n1,n2,k));
    return 0;
}
