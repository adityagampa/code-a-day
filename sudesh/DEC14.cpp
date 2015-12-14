#include<stdio.h>
int main()
{
    int l=0,a[4]={0,1,1,0},i,j=0,temp=0;
    printf("before sorting\n");
    for(i=0;i<4;i++)
    {
    	printf("%d \n",a[i]);
    }
    
    while(j<3)
	
	{
		
	
		if(a[j]==1)
		{
			l=j+1;
			while(a[l]==1)
			{
				l++;
			}
			a[l]=1;
			a[j]=0;
		}
		j=l+1;
	}    
	printf("after sorting\n");
    for(i=0;i<4;i++)
    {
    	printf("%d \n",a[i]);
    }
    return 0;
}
