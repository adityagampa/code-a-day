#include<stdio.h>
int main()
{
        int a[]={0,1,1,1,0,0,1,0};
        int i,count=0;
        for(i=0;i<8;i++)
        {
            if(a[i]==1)
            {
                count ++;
                a[i]=0;
            }

        }
        for(i=count;i<8;i++)
            a[i]=1;
        printf("sorted array : ");
        for(i=0;i<8;i++)
            printf("%d  ",a[i]);
}

//No. of comparisons through iterations : 9 + 4 + 9 = 22
//No. of comparisons by conditionals : 8
//No. of assignment operations : 8
//Time complexity : 22 + 8 = 30 ie O(1)
//Space complexity : 4*8 + 4 + 4 = 40 bytes
