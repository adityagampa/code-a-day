#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n1,n2,r,mcount=0,i=0,j=0,k=0,size =0,temp =0;
    int *fa,*sa,*ma,*rv;
    printf("\n Enter the value for n1 \n");
    scanf("%d",&n1);
    if(n1<0)
    {
        printf("\nWrong input \n");
        exit(-1);
    }
    printf("\n Enter the number for n2 \n");
    scanf("%d",&n2);
    if(n2<0)
    {
        printf("\n Wrong input \n");
        exit(-1);
    }
    printf("\n Enter the r value\n");
    scanf("%d",&r);
    if(r<=0)
    {
        printf("\nInvalid input \n");
        exit(-1);
    }

    fa = (int *) malloc(r*(sizeof(int)));                   //allocating memory for first table
    sa = (int *) malloc(r*(sizeof(int)));                   //allocating memory for second table

    printf("\n Generating first table\n");
    for(i=0;i<r;i++)
    {
        (fa[i]) = n1*(i+1);                                             //Generating and storing multiples of n1
    }
    for(i=0;i<r;i++)                                                    //Optional
    {
        printf(" %d ",fa[i]);                                       //Optional
    }
    printf("\n Generating second table\n");
    for(i=0;i<r;i++)
    {
        (sa[i]) = n2*(i+1);                                             //Generating and storing multiples of n2
    }
    for(i=0;i<r;i++)                                                    //Optional
    {
        printf(" %d ",sa[i]);                                         //Optional
    }
    size = 2*r;                                                             //merged table size
    printf("\n merging tables \n");
    ma = (int *)malloc(size*(sizeof(int)));                 //allocating memory for main table

    for(i=0,mcount=0;i<r;i++,mcount++)                      //copying first table
    {
        (ma[mcount]) = (fa[i]);
    }
    for(i=0;i<r&&mcount<size;i++,mcount++)              //copying second table
    {
        (ma[mcount]) = (sa[i]);
    }
    for(i=0;i<size;i++)                                                 //Optional
    {
        printf(" %d ",ma[i]);                                        //Optional
    }
            //sorting
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(ma[i] > ma[j])
            {
                temp = ma[j];
                ma[j] = ma[i];
                ma[i] = temp;
            }
        }
    }
    printf("\n After sorting merged table \n");                         //Optional
     for(i=0;i<size;i++)
    {
        printf(" %d ",ma[i]);                                                           //Optional
    }
    //duplicate handle
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;)
        {
            if(ma[j] == ma[i])
            {
                for(k=j;k<size;k++)
                {
                    ma[k] = ma [k+1];
                }
                size--;
            }
            else
            {
                j++;
            }
        }
    }
    printf("\n After handling duplicates merged table \n");             //Optional
     for(i=0;i<size;i++)
    {
        printf(" %d ",ma[i]);
    }

    printf("\n The rth number in the merged table is : %d \n",ma[r-1]);         //since r is in index (r-1)

    return 0;
}
