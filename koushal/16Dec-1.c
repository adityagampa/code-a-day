#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *ptr,size=0,i=0,j=0;

    printf("\n Enter the size of matrix \n");
    scanf("%d",&size);
    if(size<=0)
    {
        printf("\n Invalid size \n");
        exit(-1);
    }

        ptr = (int *) malloc(size*size*(sizeof(int)));
        if(ptr == NULL)
        {
            printf("\nCould not create memory \n");
            exit(-1);
        }

        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                if(i == j)
                {
                    *(ptr + i*size +j) = 0;
                }
                else if(i>j)
                {
                    *(ptr + i*size +j) = -1;
                }
                else
                {
                        *(ptr + i*size + j) = 1;
                }
            }
        }

        printf("\n The output 2D matrix is: \n");
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                printf("%2d  ", *(ptr + i*size +j));
            }
            printf("\n");
        }
        return 0;
}
