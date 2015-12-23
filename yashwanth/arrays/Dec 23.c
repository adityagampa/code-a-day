#include<stdio.h>
int main()
{
	int a[100],b[100],c[100],d[100],i,j,k=0,l,m,n,count;
	printf("enter the size of first array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the size of 2nd array\n");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("enter the size of 3rd array\n");
	scanf("%d",&l);
	for(i=0;i<l;i++)
	{
		scanf("%d",&c[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j]&&count==0)
			{
				d[k]=a[i];
				k++;
				count++;
			}
		}
	}
	printf("\n");
	for(i=0;i<k;i++)
	{
		count=0;
		for(j=0;j<l;j++)
		{
			if(d[i]==c[j]&&count==0)
			{
				printf("%d ",d[i]);
				count++;
			}
		}
	}
}
