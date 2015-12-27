#include<stdio.h>
int main()
{
	int n,i,j,size,k,x;
	int	a[50];
	printf("\n enter number of elements");
	scanf("%d",&size);
	printf("\n enter the elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number \n");
	scanf("%d",&n);
	x=0;
	for(i=0;i<size;i++)
	{
		for( j=i+1;j<size;)
		{
		
			if(a[j]==a[i])
			{	
				for(k=j;k<size;k++)
				{
					a[k]=a[k+1];
				}
				size--;
				
			}
			else
				j++;
				
		}
		
	}
	
	for(i=0;i<size;i++)
	{
		for(k=0;k<size;k++)
		{
			if((a[i]+a[k])==n)
			{
				printf("%d %d \n ",a[i],a[k]);
				
			}
		}
		
	}
	
	
	return 0;
}

