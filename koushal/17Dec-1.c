#include<stdio.h>
#include<stdlib.h>

int isprime(int a);                                                             //function that checks if number 'a' is prime
int main(void)
{
    int *ma,*ea,*oa,*pa,size=0,i=0,pcount=0,ecount=0,ocount=0,select=0,flag=0,ko=0;

    printf("\n Enter the size of the array \n");
    scanf("%d",&size);
    if(size<=0)
    {
        printf("\n Invalid Size \n");
        exit(-1);
    }

    ma = (int *) malloc(size*(sizeof(int)));                                    //allocating memory for main array
     pa = (int *) malloc(size*(sizeof(int)));                                     //allocating memory for prime array
     ea = (int *) malloc(size*(sizeof(int)));                                   //allocating memory for even array
     oa = (int *) malloc(size*(sizeof(int)));                                   //allocating memory for odd array
    printf("\n Enter the elements of the array \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ma[i]);
    }

    for(i=0;i<size;i++)
    {
        if(isprime(ma[i]))                                                                  //check if number is prime
        {
            pa[pcount] = ma[i];                                                            //if prime add it to prime array
            pcount++;
        }
        if(ma[i]%2 == 0)                                                                    //check if number is even
        {
            ea[ecount] = ma[i];                                                             //if even add it to even array
            ecount++;
        }
        else
        {
            oa[ocount] = ma[i];                                                             //if odd add it to odd array
            ocount++;
        }
    }

    printf("\n OUTPUT \n");
    printf("\n The given array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d  ",ma[i]);
    }

    printf("\n The array of odd elements is : ");
    for(i=0;i<ocount;i++)
    {
        printf("%d  ",oa[i]);
    }
    printf("\n The array of even numbers is : ");
    for(i=0;i<ecount;i++)
    {
        printf("%d  ",ea[i]);
    }
     if(pcount == 0)                                                                               //if no primes in given array
    {
        printf("\n There are no primes in the given array \n Select an element from the array \n");
        scanf("%d",&select);
        for(i=0;i<size;i++)
        {
            if(select == ma[i])                                                             //selected number in array-->VALID
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)                                                                           //selected number not in array-->INVALID
        {
            printf("\n Wrong selection... select from the array elements only");
            exit(-1);
        }
        for(i=1;i<50;i++)                                                                   //finding nearest prime using isprime function
        {
            if(isprime(select+i))
            {
                printf("\nThe nearest prime to %d is %d \n",select,select+i);
                break;
            }
            if(isprime(select-i))
            {
                printf("\n The nearest prime to %d is %d \n",select,select-i);
                break;
            }
        }
        ko = 1;
    }
if(ko==0)                                                                      //display prime array
{
    printf("\n The array of primes is : ");
    for(i=0;i<pcount;i++)
    {
        printf("%d  ",pa[i]);
    }
}
    return 0;
}

int isprime(int j)
{
    int i,f=0;
    if(j==1)                                                            //1 is neither prime not composite return false
    {
        return 0;
    }
    for(i=2;i<=j/2;++i)
    {
        if(j%i == 0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
        return 0;
    else
        return 1;
}
