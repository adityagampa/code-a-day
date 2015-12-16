#include<stdio.h>
int main()
{
	int mat[20][20];
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
				mat[i][j]=0;
			}
			else if(i<j)
			{
				mat[i][j]=1;
			}
			else if(i>j)
			{
				mat[i][j]=-1;
			}
		}
	}
	printf("\n the matrix with the given order is \n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			
			printf(" %d ",mat[i][j]);
		}
		printf("\n");
	}
}
