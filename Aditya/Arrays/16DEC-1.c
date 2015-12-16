#include<stdio.h>
#include<stdlib.h>

void printSquareMatrix(int n)
{
    int a[]={0,-1,1};
    int i=0,j=0;
    for(; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
                printf("%d\t",a[0]);
            else if(i>j)
                printf("%d\t",a[1]);
            else
                printf("%d\t",a[2]);
        }
        printf("\n");
    }
    free(a);
}
int main()
{
    int n;
    printf("\nEnter size of the matrix :");
    scanf("%d",&n);
    printSquareMatrix(n);
    return 0;
}
// Time Complexity is O(n^2)..
// We don't need to build an matrix of the given size as only 3 different numbers would be stored..
