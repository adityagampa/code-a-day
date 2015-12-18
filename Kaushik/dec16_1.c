#include<stdio.h>
int main()
{
	
	int arr[]={0,-1,1};
	int a;
	printf("enter the order of the matrix :");
	scanf("%d",&a);
	if(a<=0)
	{
		printf("order of the matrix cannot be less than or equal to zero ");
	}
	int i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(i==j)
			{
				printf(" %d ",arr[0]);
			}
			else if(i<j)
			{
				printf(" %d ",arr[2]);
			}
			else if(i>j)
			{
				printf(" %d ",arr[1]);
			}
		
		}
		printf("\n");
	}
	
}
