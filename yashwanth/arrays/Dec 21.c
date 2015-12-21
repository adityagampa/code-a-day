#include<stdio.h>
int main()
{
	int a[100],b[100],i,j=0,n,temp,m;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=0 && a[i]<100)
		{
			b[j]=a[i];
			j++;
		}
	}
	for(i=0;i<j;i++)
	{
		for(m=i+1;m<j;m++)
		{
			if(b[i]>b[m])
			{
				temp=b[i];
				b[i]=b[m];
				b[m]=temp;
			}
		}
	}
	if(b[0]==0){}
	else if(b[0]==1)
	{
		printf("%d\n",0);
	}
	else
	{
		printf("%d-%d\n",0,b[0]-1);
	}
	for(i=0;i<j-1;i++)
	{
		if((b[i+1]-b[i])==1||b[i]==b[i+1])
		{
			continue;
		}
		else if((b[i+1]-b[i])==2)
		{
			printf("%d\n",b[i]+1);
		}
		else
		{
			printf("%d-%d\n",b[i]+1,b[i+1]-1);
		}
	}
	if(b[j-1]==99){}
	else if(b[j-1]==98)
	{
		printf("%d\n",99);
	}
	else
	{
		printf("%d-%d\n",b[j-1]+1,99);
	}
}
