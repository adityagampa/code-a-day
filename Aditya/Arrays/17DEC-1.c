#include <stdio.h>
#include <stdlib.h>
int evenlen,oddlen,primelen; //lengths
void display(int *a,int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d\t",a[i]);
    printf("\n");
}
int isPrime(int n)
{
    if(n<=1)
        return 0;
    int i=2;
    for(; i<n/2; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
void primeEvenOdd(int *a,int n,int *odd,int *even,int *prime)
{
    int i=0,j,flag=0;
    for(; i<n; i++)
    {
        if(a[i]%2==0)
        {
            even[evenlen++]=a[i];
            if(a[i]==2) //the only even prime 2
                prime[primelen++]=2;
        }
        else
        {
            odd[oddlen++]=a[i];
            if(isPrime(a[i])) //if it's not odd then no need to check whether it is prime or not
                prime[primelen++]=a[i];
        }
    }
    if(primelen)
    {
        printf("Primes in the array:\n");
        display(prime,primelen);
    }
    else
    {
        printf("Select any number from the array :\n");
        scanf("%d",&i);
        for(j=0;j<n;j++)
            if(a[j]==i)
                break;
        if(j==n)
        {
            printf(" Element is not in the array\n");
            exit(-1);
        }
        if(i<=1) //the only even prime 2 will be the nearest prime for all elements less than or equal to 1
        {
            printf(" nearest prime for %d is %d\n",i,2);
            return;
        }
        for(j=0;;j++)
        {
            if((i-j)%2!=0 && isPrime(i-j)) //if it's not odd then no need to check whether it is prime or not
            {
                printf(" nearest prime for %d is %d\n",i,i-j);
                flag=1;
            }
            if((i-j)%2!=0 && isPrime(i+j))
            {
                printf(" nearest prime for %d is %d\n",i,i+j);
                return;
            }
            if(flag)
                return;
        }
    }
}
int main()
{
    int *a,n,i=0;
    printf("\n Enter size :");
    scanf("%d",&n);
    if(n<=0)
        return 0;
    a=malloc(n*sizeof(int));
    printf("\n Enter elements :");
    for(; i<n; i++)
        scanf("%d",&a[i]);
    int *odd=malloc(n*sizeof(int)),*even=malloc(n*sizeof(int)),*prime=malloc(n*sizeof(int));
    primeEvenOdd(a,n,odd,even,prime);
    printf(" Odd Nums in the array:\n");
    display(odd,oddlen);
    printf(" Even nums in the array:\n");
    display(even,evenlen);
    free(a);
    free(odd);
    free(even);
    free(prime);
    return 0;
}
// Time complexity is O(n)
