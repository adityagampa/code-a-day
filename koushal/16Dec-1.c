#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int size =0,i=0,j=0,var = -1,var1 = 0,var2 = 1;
    printf("\n Enter the size of matrix \n");
    scanf("%d",&size);
    if(size<=0)
    {
        printf("\n Invalid size \n");
        exit(-1);
    }
     for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                if(i == j)
                {
                    printf("%2d ",var1);
                }
                else if(i>j)
                {
                    printf("%2d ",var);
                }
                else
                {
                    printf("%2d ",var2);
                }
            }
            printf("\n");
        }

    return 0;
}
