#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i=0,j=0,k=0,size=0,n1,n2,r=0,*fa,*sa,*ma;
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

    for(i=0;i<r;i++)
    {
        (fa[i]) = n1*(i+1);                                             //Generating and storing multiples of n1
    }

    for(i=0;i<r;i++)
    {
        (sa[i]) = n2*(i+1);                                             //Generating and storing multiples of n2
    }
      size = 2*r;                                                             //merged table size

      ma = (int *)malloc(size*(sizeof(int)));                 //allocating memory for main table

      for(i=0,j=0,k=0;i<size;i++)
      {
          if(fa[j]<sa[k])
          {
              ma[i] = fa[j];
              j++;
          }
          else if(fa[j]>sa[k])
          {
              ma[i] = sa[k];
              k++;
          }
          else
          {
              ma[i] = fa[j];
              j++;
              k++;
          }
      }

      printf("\n The rth number is : \t %d \n",ma[r-1]);
      return 0;
}
