#include <stdio.h>

int primenum(int a)
{
    int m;
    if(a==0)
        return 0;
    if(a==1)
        return 2;
    for(m=2; m<=(a/2); m++)
    {
        if(a%m==0)
        {
            return 0;
        }
    }
    return 1;
}

int diff(int a,int b)
{
    if( (a-b) >0 )
        return a-b;
    else
        return b-a;
}

void display(int *a,int n)
{
    int i=0;
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}

int present(int *a,int n,int k)
{
    int i=0;
    for(i=0; i<n; i++)
        if(k==a[i])
            return 1;
    return 0;
}


void classify(int a[],int n)
{
    int i,j=0,k=0,l=0;
    int even[n],odd[n],prime[n];
    if(n==0)
        printf("No elements in the array");
    printf("\nElements in array are : ");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
        if(primenum(a[i]) && a[i]!=1)
            prime[l++]=a[i];
        if( a[i]!=0)
            if( a[i]%2==0 )
                even[k++]=a[i];
            else
                odd[j++]=a[i];
    }
    if(k>0)
    {
        printf("\nEven numbers are : ");
        display(even,k);
    }
    else
        printf("\nNo even numbers");
    if(j>0)
    {
        printf("\nEven numbers are : ");
        display(odd,j);
    }
    else
        printf("\nNo odd numbers");
    if(l>0)
    {
        printf("\nPrime numbers are : ");
        display(prime,l);
    }
    else
    {
        printf("\nNo prime numbers");
        printf("\nSelect an element from the array : ");
        scanf("%d",&k);
        if(present(a,n,k)==1)
        {
            for(i=0; i<100; i++)
            {
                if( (primenum(k-i)==1) && (k-i)>0 )
                {
                    printf("%d",k-i);
                    break;
                }
                else if( primenum(k+i) )
                {
                    printf("%d",k+i);
                    break;
                }
            }
            printf("\nis the nearest prime number is %d");
        }
        else
            printf("\nEntered number is not present in the array");
    }
}

int main()
{
    int a[]= {2,3,6,1,8,4},n=sizeof(a)/sizeof(a[0]);
    classify(a,n);
    return 0;
}
