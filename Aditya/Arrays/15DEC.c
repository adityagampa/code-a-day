#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int num1,int num2)
{
    a[num1]= a[num1] + a[num2];
    a[num2]= a[num1] - a[num2];
    a[num1]= a[num1] - a[num2];
}
void * sortedArrayPositionsChange(int *a,int n)
{
    int num1=-1,num2=-1,i=1;
    if(n==0 || n==1)
        return NULL;
    for(i=0; i<n-1; i++)
    {
        if(num1 == -1)
        {
            if(a[i]>a[i+1])
            {
                num1=i;
                num2=i+1;
            }
        }
        else
        {
            if(a[i]>a[i+1])
            {
                num2=i+1;
                break;
            }
        }
    }
    swap(a,num1,num2);
    return a;
}
void display(int *a,int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d\t",a[i]);
}
int main()
{
    int n,*a=malloc(n*sizeof(int)),i=0;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("\nEnter elements: ");
    for(; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    a=sortedArrayPositionsChange(a,n);
    if(a)
        display(a,n);
    free(a);
    return 0;
}
// worst case time complexity is O(n) where 'n' is the length of the array..
// Approach is to find the indexes which are violating the ascending order .. and swap those numbers in both the
// indexes.. Ex :if input is 10 40 30 20 50 then the approach finds the indexes of 40 and 20 i.e 1 & 3 and swaps them.