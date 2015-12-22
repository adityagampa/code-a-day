#include <stdio.h>
#include <stdlib.h>
void display(int *a,int n)
{
    int i=0;
    for(;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
void quickSort(int *a,int left,int right)
{
    if(left<right)
    {
        int l=left+1;
        int r=right;
        int pivot=left;
        while(l<r)
        {
            while(a[l]<a[pivot])
                l++;
            while(a[r]>a[pivot])
                r--;
            if(l<r)
            {
                int temp=a[l];
                a[l]=a[r];
                a[r]=temp;
            }
            else
            {
                int temp=a[pivot];
                a[pivot]=a[r];
                a[r]=temp;
            }
            l++;
        }
        quickSort(a,left,r-1);
        quickSort(a,r+1,right);
    }
}
void printMissingNumbers(int *a,int n)
{
    if(n<=0)
        return;
    quickSort(a,0,n-1);
    int i=0;
    if(a[0]<0)
    {
        for(i=0; i<n-1 && a[i]<0; i++)
        {
            if(a[i]<0 && a[i+1]>0)
            {
                if(a[i+1]==1)
                    printf("%d\n",0);
                else
                    printf("%d-%d\n",0,a[i+1]-1);
            }
        }
    }
    else if(a[0]>0)
    {
        if(a[1]>1)
            printf("%d-%d\n",0,a[1]-1);
        else
            printf("%d\n",0);
    }
    for(; i<n-1; i++)
    {
        if(a[i]>99)
            break;
        if(a[i]<0 || a[i+1]-a[i]<=1)
            continue;
        if(a[i+1]-a[i]==2)
            printf("%d\n",a[i]+1);
        else if(a[i+1]<100)
            printf("%d-%d\n",a[i]+1,a[i+1]-1);
        else if(a[i]+1!=99)
            printf("%d-%d\n",a[i]+1,99);
        else
            printf("%d\n",99);
    }
}
int main()
{
    int a[]= {1,1,35,49,48,98,98,59,49,18,98,128,178};
    int n=sizeof(a)/sizeof(int);
    display(a,n);
    printMissingNumbers(a,n);
    return 0;
}
// Time complexity : O(nlogn)
// sort and collate.. that's it.. (if you have any better solution whatsapp me.. :)
