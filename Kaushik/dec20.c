#include<stdio.h>
#include<stdlib.h>
int number(int num[],int rem[],int size)
{
	int temp;
	int number=1;
	while(1)
	{
		for(temp=0;temp<size;temp++)
			
			if(num[temp]<=rem[temp])
			{
				printf("The remainder cannot be gretaer than or equal to  the number");
				exit(0);
			}
			else if(number%num[temp]!=rem[temp])
			
				break;
		if(temp==size)
				return number;
				
		number++;
	}
	return number;
}
int main()
{
		int num[]={3,4,5};
		int rem[]={2,3,1};
		
		int size=sizeof(num)/sizeof(num[0]);
		printf("the answer is %d",number(num,rem,size));
}