#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
{
	int *x = (int *)a;
	int *y = (int *)b;
	return *x -*y;
}
int main()
{
	int a[50],n1,n2,r,i,j,k;
	j=0;
	printf("\n enter the values of n1 , n2 and r");
	scanf("%d %d %d",&n1,&n2,&r);
	for(i=1;i<=r;i++)
	{
		a[j]=n1*i;
		j++;
	}
	for(i=1;i<=r;i++)
	{
		a[j]=n2*i;
		j++;
	
	}
	
	k=0;
	qsort(a,j,sizeof(int),cmp);// c library function to sort a array
	for(i=0;i<j;i++)
	{
		if(a[i]!=a[k])
		{
			k++;
			a[k]=a[i];
		}
	}	
	for(i=0;i<(k+1);i++)
	{
		printf("%d ",a[i]);
	}
	printf(" \n the number at r position is %d",a[r]);
	
}
