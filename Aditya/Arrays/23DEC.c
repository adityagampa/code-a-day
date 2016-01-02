#include <stdio.h>
#include <stdlib.h>
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
void commonNumbers(int *a,int n1,int *b,int n2,int *c,int n3)
{
    int i,j,k;
    /*
    quickSort(a,0,n1-1);
    quickSort(b,0,n2-1);
    quickSort(c,0,n3-1);
    */
    for(i=j=k=0;i<n1 && j<n2 && k<n3;)
    {
        if(a[i]<b[j] && a[i]<c[k])
            i++;
        else if(b[j]<a[i] && b[j]<c[k])
            j++;
        else if(c[k]<a[i] && c[k]<b[j])
            k++;
        else if(a[i]==b[j] && b[j]==c[k])
        {
            printf("%d\t",a[i]);
            i++;
            j++;
            k++;
        }
    }
}
int main()
{
    int a[]={1,5,10,20,40,80},b[]={6,7,20,80,100},c[]={3,4,15,20,30,70,80,120};
    int n1=sizeof(a)/sizeof(int),n2=sizeof(b)/sizeof(int),n3=sizeof(c)/sizeof(int);
    commonNumbers(a,n1,b,n2,c,n3);
    return 0;
}
// Time Complexity : O(n) if arrays are sorted else O(nlogn)..
// according to the sample test cases it says that arrays are sorted.. if arrays are not sorted then uncomment the
// quick sorts..
// Three pointers to three arrays .. the pointer pointing to minimum number is moved forward.. at a point all
// pointers point to the common number (if any exits..) and that is printed..
