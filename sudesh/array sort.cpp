#include<stdio.h>
int main()
{
    int l,a[8]={1,0,0,1,0,0,1,1},i,j=0,temp=0;
    printf("before sorting\n");
    for(i=0;i<8;i++)
    {
    	printf("%d \n",a[i]);
    }
    
    while(j!=4)
	{
		l=j+1;
	
		if(a[j]==1)
		{
			while(a[l]!=0)
			{
				l++;
			}
			a[l]=1;
			a[j]=0;
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
