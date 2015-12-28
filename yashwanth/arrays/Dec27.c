#include<stdio.h>
int main()
{
	char str[100],temp;
	int i,j,a[100],ln=0,k;
	printf("enter a string\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		ln++;
		a[i]=str[i];
	}
	k=ln-1;
	j=0;
	while(j!=k)
	{
		if(((a[j]>=65&&a[j]<=91)||(a[j]>=97&&a[j]<=122)))
		{
			if(((a[k]>=65&&a[k]<=91)||(a[k]>=97&&a[k]<=122)))
			{
				temp=str[j];
				str[j]=str[k];
				str[k]=temp;
				j++;
				k--;
			}
			else
			{
				k--;	
			}
		}
		else
		{
			j++;
		}
	}
	puts(str);
}