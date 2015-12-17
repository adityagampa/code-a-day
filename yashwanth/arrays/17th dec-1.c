#include <stdio.h>

int main(void) {
    int a[15]={10,18,20,26,25,48,49},i,j=0,k=0,l=0,m,b[9],c[9],d[9],count,count1,flag=0,p,h,g,e,f,count2,r;
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
            flag++;
        }
    }
    if(flag==0)
    {
            
            p=a[6];
            printf("the selected number is :%d\n",p);
            g=p;
            e=p;
            f=p;
            while(p>0)
            {
                p++;
                count1=0;
                for(i=1;i<p;i++)
                {
                  if(p%i==0)
                  {
                      count1++;
                  }
                }
                  if(count1==1)
                  {
                    l++;
                }
                if(l==1)
                {
                    break;
                }
            }
            h=p-g;
            while(e>0)
            {
                e--;
                count2=0;
                for(i=1;i<e;i++)
                {
                    if(e%i==0)
                    {
                        count2++;
                    }
                }
                if(count2==1)
                {
                    break;
                }
                
            }
            r=f-e;
            if(r>h)
           {
                d[l-1]=p;
            }
            else if(r<h)
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
