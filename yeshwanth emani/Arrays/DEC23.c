#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1,n2,n3,i,j,k,*p,*q,*r;
	
	printf("\nenter n:");
	scanf("%d",&n1);
	p = malloc(n1*sizeof(int));
	printf("\nenter the array1:");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&p[i]);
	}
	
	printf("\nenter n:");
	scanf("%d",&n2);
	q = malloc(n2*sizeof(int));
	printf("\nenter the array1:");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&q[i]);
	}
	
	printf("\nenter n:");
	scanf("%d",&n3);
	 r= malloc(n3*sizeof(int));
	printf("\nenter the array1:");
	for(i=0;i<n3;i++)
	{
		scanf("%d",&r[i]);
	}
	
	for(i=0;i<n1;i++)
	{
	    for(j=0;j<n2;j++)
		{
		   if(p[i]==q[j])
		   {
		   	  for(k=0;k<n3;k++)
		   	  {
		   	     if(q[j]==r[k])	
		   	     {
			      printf("%d ",p[i]);
			      break;
			     }
			  }
			  break;
		   }	
		}	
	}
}
