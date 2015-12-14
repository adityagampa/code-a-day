#include<stdio.h>
int main()
{
    int l=0,a[8]={0,0,1,0,1,1,1,0},i,j=0;
    printf("before sorting\n");
    for(i=0;i<8;i++)
    {
    	printf("%d \n",a[i]);
    }
    
    while(j<=8)
	
	{
		
	
		if(a[j]==1)
		{
			l=j+1;
			while(a[l]==1)
			{
				l++;
			}
			if(l<8)
			{
			
				a[l]=1;
				a[j]=0;
			}
		}
		j++;
	}    
	printf("after sorting\n");
    for(i=0;i<8;i++)
    {
    	printf("%d \n",a[i]);
    }
    return 0;
}
