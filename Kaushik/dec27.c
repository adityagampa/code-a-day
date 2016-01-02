#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],ch;
	int temp=0;
	scanf("%s",a);
	 int length = strlen(a);
	int n = length-1;
	a[length] = '\0';
	int i = 0;
	while(i < n)
	{
		temp = 0;
		while(temp != 1 && i < n)
		{
			if((a[n] >= 'a' && a[n] <= 'z') || (a[n] >= 'A' && a[n] <= 'Z'))
			{
				if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
				{
					ch = a[n];
					a[n] = a[i];
					a[i] = ch;
					temp = 1;
				}
				else
				{
					i++;
				}
			}
			else
			{
				n--;
			}
		}
		n--;
		i++;
	}
	
	for(i=0;i<length;i++)
	{
		printf("%c",a[i]);
	}

	return 0;
}