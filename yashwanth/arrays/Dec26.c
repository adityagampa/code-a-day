#include <stdio.h>
int main()
{
   char str[100];
   int max=0,count=0,i;
   printf("enter a string\n");
   gets(str);
   for(i=0;str[i]!='\0';i++)
   {
   	if(str[i]=='(')
   	{
   		count++;
   		if(count>max)
   		{
   			max=count;
   		}
   	}
   	if(str[i]==')')
   	{
   		if(count>0)
   			count--;
   		else
   			return -1;
   	}
   }
   if(count==0)
   	printf("%d \n",max);
   else
   {
   	printf("%d \n",-1);
   }
}