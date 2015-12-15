#include<stdio.h>
void sort_two(int array[],int size_array)
{
	int index1=-1;
	int index2=-1;
	int i=0;
	for(;i<size_array;i++)
	{
		if(index==-1)
		{
			if(array[i]>array[i+1])
			{
				
				index1=i;
				index2=i+1;	
			}
			else if(array[i]>array[i+1])
			{
				index2=i+1;
				break;	
			}
		}
	}
	//swapping the elements
	int temp;
	temp=array[index1];
	array[index1]=array[index2];
	array[index2]=temp;
}
int main()
{
	int array[]={10,20,60,40,50,30};
	int size_array=sizeof(array)/sizeof(int)-1;
	sort_two(array,size_array);
	int j;
	for(j=0;j<=size_array;j++)
	{
		printf("  %d  ",array[j]);	
	}
}
