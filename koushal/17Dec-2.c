#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int size=0,i=0,j=0,k=0,sqa=0,sqb=0,sqc=0,flag =0,*ptr;
    printf("\n Enter the size of the array \n");
    scanf("%d",&size);
    if(size<3)
    {
        printf("\n Invalid size \n");
        exit(-1);
    }

    ptr = (int *) malloc(size*(sizeof(int)));
    printf("\n Enter the elements of the array \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(ptr[i] == ptr[j])
            {
                printf("\n Duplicate found \n");
                exit(-1);
            }
        }
    }

    printf("\n There are no duplicates in the given array \n");

    //finding triplets
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(i==j)
            {
                continue;
            }
            for(k=j+1;k<size;k++)
            {
                if((j == k) || (i == k))
                {
                    continue;
                }
                sqa= ptr[i] * ptr[i];
                sqb = ptr[j] * ptr[j];
                sqc = ptr[k] * ptr[k];
                if((sqa == sqb +sqc) || (sqb == sqa + sqc) || (sqc == sqa + sqb))
                {
                    printf("\nThe pythogerean triplets are:   %d  %d  %d  \n",ptr[i],ptr[j],ptr[k]);
                    flag = 1;
                }

            }
        }
    }
    if(flag == 0)
    {
        printf("\n There are no pythogerean triplets in the array \n");
    }

    return 0;
}
