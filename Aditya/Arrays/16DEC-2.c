#include <stdio.h>
#include <stdlib.h>
void display(int *a,int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d\t",a[i]);
    printf("\n");
}
void swap(int *n1,int *n2)
{
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}
void reverse(int *a,int n1,int n2)
{
    for(;n1<n2;n1++,n2--)
    {
        swap(&a[n1],&a[n2]);
    }
    return a;
}
void rotateRightArray(int *a,int n,int k)
{
    reverse(a,0,k-1);
    reverse(a,k,n-1);
    reverse(a,0,n-1);
}
int main()
{
    int n,k;
    printf("\n Enter 'k' :");
    scanf("%d",&k);
    printf("\n Enter size :");
    scanf("%d",&n);
    printf("\n Enter elements :");
    int *a=malloc(n*sizeof(int)),i=0;
    for(; i<n; i++)
        scanf("%d",&a[i]);
    rotateRightArray(a,n,k);
    display(a,n);
    free(a);
    return 0;
}
// Time Complexity - O(n)
// Approach is to reverse the first 'k' numbers and reverse the remaining numbers.. then now reverse the entire
// array..
// Ex : if k=3 and array is 1 2 3 4 5 6 then we need to reverse the first '3' numbers .. we get 3 2 1 4 5 6..
// then reverse the remaining numbers other than the first '3' .. we get 3 2 1 6 5 4 .. now on reversing the entire
// array we get 4 5 6 1 2 3.. this is a famous algorithm known as reverse algorithm and this approach has many
// applications..
