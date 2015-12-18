#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b);
int main(void)
{
	int i=0,size,*ptr,*le,*re;
	
	printf("\n Enter the size of the array \n");
	scanf("%d",&size);
	if(size<=1)
	{
		printf("\n Invalid size... RETRY \n");
		exit(-1);
	}
	
	ptr=(int *) malloc(size*(sizeof(int)));
	if(ptr == NULL)
	{
		printf("\n ERROR: Couldnot allocate memory\n");
		exit(-1);
	}
	
	printf("\n Enter the elements of the array \n");
	for(;i<size;i++)
	{
		scanf("%d",(ptr+i));
	}
	
	i=0;
	while((*(ptr+i)) < (*(ptr+(i+1))) && i<(size-2))
	{
		i++;
	}
	le = (ptr+i);
	if(i==(size-2) && (*(ptr+i)) > (*(ptr+(i+1))))
	{
		swap(le,(le+1));
		goto END;
	}
	else if(i == (size-2) && (*(ptr+i)) < (*(ptr+(i+1)))) 
	{
		goto END;
	}
	while(*(ptr+(i+1)) < (*(ptr+(i+2))) )
	{
		i++;
	}  
	re=(ptr+(i+2));

	swap(le,re);
	
	END:printf("\n The sorted array is :");
	i=0;
	for(;i<size;i++)
	{
		printf("%d   ",(*(ptr+i)));
	}
	printf("\n");
	return 0;
}

void swap(int *a,int *b)
{
	int  temp = *a;
	*a = *b;
	*b = temp;
	
}
