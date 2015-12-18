#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *ptr,size=0,k=0,i=0,temp=0;

    printf("\n Enter the size of the array \n");
    scanf("%d",&size);
    if(size <=0)
    {
        printf("\n Invalid Size \n");
        exit(-1);
    }

    printf("\n Enter the k value \n");
    scanf("%d",&k);

    ptr = (int *) malloc(size*(sizeof(int)));
    if(ptr==NULL)
    {
        printf("\n could not allocate memory \n");
        exit(-1);
    }

    printf("\n Enter the elements of the array \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }

    if(size>k)
    {
        while(k>0)
        {
            temp = (ptr[0]);
            for(i=0;i<size-1;i++)
            {
                (ptr[i]) = (ptr[i+1]);
            }
            (ptr[i]) = temp;
            k--;
        }
    }
    else if(size<k)
    {
        k = k % size;
        while(k>0)
        {
            temp = (ptr[0]);
            for(i=0;i<size-1;i++)
            {
                (ptr[i]) = (ptr[i+1]);
            }
            (ptr[i]) = temp;
            k--;
        }
    }

    printf("\n The output array is :");
    for(i=0;i<size;i++)
    {
        printf("%d  ",(ptr[i]));
    }
    return 0;
}
