#include<stdio.h>
int main()
{
	int a[100],i,j=1,k=2,n,l=1,m,b[100],count=0;
	printf("enter the size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	i=0;
	while(i<n)
	{
		if((a[i]+a[j]+a[k])%3==0&&k<n)
		{
			count++;
		}
		k++;
		if(k>=n)
		{
			j++;
			k=j+1;
			if(j>=n)
			{	
				i++;
				if(i<n)
				{
					j=i+1;
					k=j+1;
				}
			}
		}
	}
	m=0;
	while(m<n)
	{
		if((b[m]+b[l])%3==0&&m!=n-1)
		{
			count++;
		}
		l++;
		if(l>=n)
		{
			m++;
			if(m<n)
			{
				l=m+1;
			}
		}
	}
	printf("number of groups are %d",count);
}