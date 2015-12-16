#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sort01Array(int *a,int n)
{
    int i=0,j=n-1;
    while(1)
    {
        if(a[i]==0)
        {
            i++;
            continue;
        }
        else if(a[j]==1)
        {
            j--;
            continue;
        }
        if(i>j)
            return;
        swap(&a[i],&a[j]);
    }
}
void display(int *a,int n)
{
    int i=0;
    for(;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    int n;
    printf("\n Enter size ");
    scanf("%d",&n);
    printf("\n Enter elements ");
    int *a=malloc(n*sizeof(int)),i=0;
    for(;i<n;i++)
        scanf("%d",&a[i]);
    sort01Array(a,n);
    display(a,n);
    free(a);
    return 0;
}
// Time Complexity - O(n)
// procedure is to take two indexes.. one from beginning and another from back.. move the front index forward until
// the array contains '0'.. similarly move the rear index towards beginning until the array contains '1'..
// now the front index will stop when it gets '1' in the array.. similarly rear index will stop when it gets '0'
// in the array.. so swap the numbers.. and repeat the process until front index crosses rear index..
// it's simply a quick sort application..
