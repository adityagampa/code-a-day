#include<stdio.h>
int main()
{
	int a[10] = {10,18,20,26,25,48,49};
	int b[10],c[10],d[10];
	int i,j,k,l,x,y,count,flag,r,p,q;
	j=0;k=0,x=0;
	
	
	for(i=0;i<7;i++)
	{
		count=0;
		flag=0;
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
		else 
		{
			c[k]=a[i];
			k++;
		}
		
		for(y=2;y<a[i];y++)
		{
			if(a[i]%y==0)
			{
				count=1;
				break;
			}
		
		}	
		if(count==0)
		{
			d[x]=a[i];
			x++;
			flag++;
		}
		
	}
	
	
	
	if(flag==0)
	{
		int f;
		printf("enter the index of the number whose nearst prime you want to find \n");
		scanf("%d",&f);
		p=a[f];
		for(r=p+1;;r++)
		{
			
			for(q=2;r%q!=0;q++);
	         {
	        
				if(r==q) 
				{
	            	d[x]=r;
	            	x++;
	            	 break;
	            	
	            }
				
			
			 } 
			
		
    
		}
	}
	
	printf("even number are\n ");
	for(i=0;i<j;i++)
	{
		printf(" %d  ",b[i]);
		
	}
		printf("\n");
	printf("odd number are\n ");
		for(y=0;y<k;y++)
	{
		printf("%d ",c[y]);
	
	}
			printf("\n");
	printf("prime number are\n ");
		for(y=0;y<x;y++)
	{
		printf("%d ",d[y]);
	
	}
	
	return 0;
	
}
