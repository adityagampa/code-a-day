#include<stdio.h>
int main()
{
	int i,a[20],x,temp=1,count_0=0,count_1=0;
	printf("Enter the length of the array :");
	scanf("%d",&i);
	printf("\n Enter the elements in the array: ");
	for(x=0;x<i;x++)
	{
		scanf("%d",&a[x]);
	}
	printf("The elements of the array are :");
	for(x=0;x<i;x++)
	{
		
		printf("\n%d ",a[x]);
	}
	printf("\n");
	for(x=0;x<i;x++)
	{
		if((temp*a[x])==0)
		{
			count_0++;
			//printf("%d",count_0);
		}
		//printf(" number of zeroes =%d",count_0);
		else if((temp*a[x])==1)
		{
			count_1++;
			//printf("%d",count_1);
		}
		
	}
	printf(" number of zeroes =%d",count_0);
	printf(" number of ones =%d",count_1);
	for(x=0;x<count_0;x++)
	{
		a[x]=0;
	}
	for(x=count_0;x<(count_0+count_1);x++)
	{
		a[x]=1;
	}
	printf("\n");
	printf("the sorted array are ");
	for(x=0;x<count_0;x++)
	{
		printf("\n%d",a[x]);
	}
	for(x=count_0;x<(count_0+count_1);x++)
	{
		printf("\n%d",a[x]);
	}
	printf("\n");
}
