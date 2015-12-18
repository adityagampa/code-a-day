#include<stdio.h>

int main()
{
	int i,n1,n2,r,x,y;
	int a[100],b[100],c[100];
	printf("\n enter n1,n2,r");
	scanf("%d %d %d",&n1,&n2,&r);
	
	for(i = 0;i<20;i++)
	{
		a[i] = n1*(i+1);
	}
	
	for(i = 0;i<20;i++)
	{
		b[i] = n2*(i+1);
	}
	
	x=0;y=0;
	for(i=0;i<20;i++)
	{
		if(a[x]<b[y])
	    {
	    	c[i] = a[x];
	    	x++;
		}
		else if(a[x]>b[y])
		{
			c[i]=b[y];
			y++;
		}
		else
		{
			c[i] = a[x];
			x++;y++;
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf(" %d",c[i]);
	}
	
	printf("\n answer = %d",c[r-1]);	
	
}
