#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n1,i,j,k,kq,l,count=0,*p;
	printf("\nenter n:");
	scanf("%d",&n1);
	p = malloc(n1*sizeof(int));
	printf("\nenter the array1:");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&p[i]);
	}
	
	//group of two
	for(i=0;i<n1;i++)
	{
		for(j=i+1;j<n1;j++)
		{
			kq = p[i]+p[j];
			if(kq%3==0)
			{
				printf("(%d,%d) ",p[i],p[j]);
				count++;
			}
		}
		
	}
	
	//group of 3
	for(i=0;i<n1;i++)
	{
		for(j=i+1;j<n1;j++)
		{
			for(k=j+1;k<n1;k++)
			{
			   	kq = p[i]+p[j]+p[k];
			   	if(kq%3 == 0)
			   	{
			   		printf("(%d,%d,%d) ",p[i],p[j],p[k]);
			   		count++;
				   }
			}
		}
	}
	
	
	printf("\n   %d",count);
}
