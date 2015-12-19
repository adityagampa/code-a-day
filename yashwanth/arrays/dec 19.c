#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[50],n,b[50],i,j,k=0,m,flag;
	printf("enter the no of elements in the array\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<0)
		{
			exit(-1);
		}
	}
	printf("enter the value\n");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				flag++;
			}
		}
		if(flag==0)
		{	
			b[k]=a[i];
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			if(b[i]+b[j]==m)
			{
				printf("%d %d\n",b[i],b[j]);
			}
		}
	}
	return 0;
}