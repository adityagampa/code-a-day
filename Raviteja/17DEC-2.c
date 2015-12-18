#include <stdio.h>

int pytriplet(int *a,int i,int j,int k)
{
    int sqi=a[i]*a[i];
    int sqj=a[j]*a[j];
    int sqk=a[k]*a[k];
    if( (sqi==sqj+sqk) || (sqj==sqi+sqk) || (sqk==sqj+sqi) )
        return 1;
    else
        return 0;
}

int noduplicate(int *a,int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if( (i!=j) && a[i]==a[j] )
                return 0;
        }
    }
    return 1;
}

void triplet(int *a,int n)
{
    int i,j,k,count=0;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(i==j)
                continue;
            for(k=j+1; k<n; k++)
            {
                if( (j==k) || (i==k) )
                    continue;
                if(pytriplet(a,i,j,k)==1)
                {
                    printf("\n%d,%d,%d are pythogerean triplets",a[i],a[j],a[k]);
                    count++;
                }
            }
        }
    }
    if(count==0)
    {
        printf("\nNo pythogerean triplets in the array");
    }
}

int main()
{
    int a[]= {5,6,7,9,12,13,24,25,40,41,11,60,61,84,85,15,112,113},n=sizeof(a)/sizeof(a[0]);
    if(noduplicate(a,n))
    {
        triplet(a,n);
    }
    else
        printf("\nThere are duplicates in the array");
    return 0;
}
