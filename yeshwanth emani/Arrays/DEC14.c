// C program for implementation of Bubble sort
#include <stdio.h>
#include<stdlib.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main()
{
	int *p,i,j,k,n;
	printf("\nenter n:");
	scanf("%d",&n);
	 p= malloc(n*sizeof(int));
	printf("\nenter the array1:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
    for (i = 0; i < n-1; i++)      
       for (j = 0; j < n-i-1; j++) 
           if (p[j] > p[j+1])
              swap(&p[j], &p[j+1]);
              
    for(i=0;i<n;i++)
	{
		printf("\n");
		printf("%d",p[i]);
	}          
 
}
