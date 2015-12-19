#include <stdio.h>

int main(void) {
    int a[15]={1,18,20,26,25,48,49},i,j=0,k=0,l=0,m,b[9],c[9],d[9],count,e,p,h=0,g=0;
    for(i=0;i<7;i++)
    {
        count=0;
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else 
        {
            c[k]=a[i];
            k++;
        }
        for(m=1;m<a[i];m++)
        {
            if(a[i]%m==0)
            {
                count++;
            }
        }
        if(count==1)
        {
            d[l]=a[i];
            l++;
        }
    }
    if(l==0)
    {
            
            p=a[4];
            e=p;
            printf("the selected number is :%d\n",p);
            while(p>0)
            {
                p++;
                h++;
                count=0;
                for(i=1;i<p;i++)
                {
                  if(p%i==0)
                  {
                      count++;
                  }
                }
                  if(count==1)
                  {
                    l++;
                }
                if(l==1)
                {
                    break;
                }
            }
            while(e>0)
            {
                e--;
                g++;
                count=0;
                for(i=1;i<e;i++)
                {
                    if(e%i==0)
                    {
                        count++;
                    }
                }
                if(count==1)
                {
                    break;
                }
                
            }
            if(g>h)
           {
                d[l-1]=p;
            }
            else if(g<h)
            {
                d[l-1]=e;
            }
            else
            {
                d[l-1]=p;
            }
    
    }
    printf("even number array is: ");
    for(i=0;i<j;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    printf("odd number array is: ");
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");
    printf("prime numberr array is: ");
    for(i=0;i<l;i++)
    {
        printf("%d ",d[i]);
    }
    return 0;
}
