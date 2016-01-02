#include <stdio.h>
#include <stdlib.h>
void swap(int *i,int *j)
{
    int temp=*i;
    *i=*j;
    *j=temp;
}
void display(int *a,int n)
{
    int i=0;
    for(; i<n; i++)
        printf("%d\t",a[i]);
    printf("\n");
}
int rearrange(int *a,int n,int m)
{
    int i=0,j=n-1;
    while(1)
    {
        if(a[i]<m)
        {
            i++;
            continue;
        }
        if(a[j]>=m)
        {
            j--;
            continue;
        }
        if(i<j)
            swap(&a[i],&a[j]);
        if(i>=j)
            return i;
    }
}
void printPairs(int *a,int n,int m)
{
    int i,r;
    printf("Pairs:\n");
    for(i=n-1;i>=0;i--)
    {
        if(a[i]<m)
            continue;
        r=a[i]-m;
        if(a[r]>=m)
            printf("%d %d\n",a[i]-m,a[r]-m);
    }
}
void pairSum(int *a,int n,int m)
{
    int i=0,r=0;
    n=rearrange(a,n,m);
    while(i<n)
    {
        if(a[i]>m)
        {
            i++;
            continue;
        }
        r=m-a[i];
        if(r<n && a[r]<m)
        {
            a[i]+=m;
            swap(&a[r],&a[i]);
        }
        else
            i++;
    }
    printPairs(a,n,m);
    for(i=0;i<n;i++)
    {
        if(a[i]>=m)
            a[i]-=m;
    }
}
int validation(int *a,int n,int num)
{
    int i=0;
    if(num<=1)
        return 0;
    for(;i<n;i++)
    {
        if(a[i]<=0)
            return 0;
    }
    return 1;
}
int main()
{
    int a[]= {1,2,3,5,1,3,9};
    int n=sizeof(a)/sizeof(int);
    int num=4;
    if(!validation(a,n,num))
        exit(-1);
    printf("Array:\n");
    display(a,n);
    pairSum(a,n,num);
    return 0;
}
// Time complexity is O(n)
// logic is divided into 3 parts..
// lets take the sample 1,2,3,5,1,3,9 and length is 7.. and num = 4
// step 1: now the move the elements 5 and 9 to end of array becz they cannot form a pair at all..
// therefore rearrange fn modifies the array as 1,2,3,3,1,5,9 .. traverse through it .. we l understand..this fn
//returns 5 as length of array .. so now consider only 5 nums becz only these can form pairs .. A : 1,2,3,3,1

// step 2: now traverse through the array and sub a[i] from num and swap that numbered index resulted by the sub with
// the present index.. ex: r=4-a[0] = 3 .. therefore  add num to a[i] (4 here) -> a[0]=1+4=5 .. now swap a[0]
// and a[r] (i.e a[3]) and repeat this process..
// if duplicate number occur then r would be same as previous dup num so rth index would contain number > num (4)
// so don't do any thing just move forward.. A : 3 7 6 5 1

// step 3: now traverse again through the loop and check for numbers > num and find r as r = a[i]-num as we
// added num to the array previously .. now check whether the rth index is >= num if yes then print them by
// subtracting num from both the numbers.. Ex: a[1] = 7(actually it was 3 for which we added num i.e 4 therefore 7
// -> r= 3 a[r] -> a[3] = 5 (1+4) so print 3,1 .. to get output in ascending order i.e (1 3),(2 2),(3 1) i travesed
// from back.. finally modify the array again by subtracting nums from numbers <=num (optional)..
// However my approach has a constraint that the input array should contain elements less than length of array..
