#include<stdio.h>

int main()
{
	int a[100];
	int length;
	printf("Enter the length of the array : ");
	scanf("%d",&length);
	int i;
	printf("Enter the elements of the array : ");	
	for(i=0;i<length;i++)
	{
		scanf("%d",&a[i]);
	}	
	printf("Enter the number of steps it need to be shifted : ");
	int k;
	scanf("%d",&k);
	//k=k%length;
	int temp;
	while(k>0)
	{
		temp=a[0];	
		for(i=1;i<length;i++)
		{
			a[i-1]=a[i];
		}		
		a[i-1]=temp;
		k--;

	}
	printf("after rotating it is :");
	for(i=0;i<length;i++)
	{
		printf("  %d  ",a[i]);
	}
	
}
