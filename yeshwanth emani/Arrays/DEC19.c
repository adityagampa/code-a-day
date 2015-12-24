#include<stdio.h>

int main()
{
	int x,n,i,j;
	int *p;
	printf("\n enter the number:\n");
	scanf("%d",&x);
	printf("enter n:\n");
	scanf("%d",&n);
	p = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(p[i]+p[j]==x)
			{
				printf("(%d,%d)",p[i],p[j]);
				printf("(%d,%d)",p[j],p[i]);
				
			}
		}
		for(i=0;i<n;i++)
		{
			if (p[i]+p[i]==x)
			     printf("(%d,%d)",p[i],p[i]);
		}
		
	}
}
