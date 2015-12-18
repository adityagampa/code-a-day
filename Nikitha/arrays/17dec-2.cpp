 #include<iostream>
 #include<stdlib.h>
#include<time.h>
using namespace std;
bool primeno(int);
int main()
{
    time_t t;
    time(&t);
    srand((unsigned int)t);
    int *a,n,k,*p,*e,*o,x=0,y=0,z=0;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    a=new int[n];
    if(n>0)
    {
    p=new int[n];
    o=new int[n];
    e=new int[n];
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]==2)
        {
            p[z++]=a[i];
        }
        if((a[i]%2)==0)
        {
            e[x++]=a[i];
        }
        else
        {
            o[y++]=a[i];
            if(a[i]!=1)
            {
                if(primeno(a[i]))
                {
                    p[z++]=a[i];
                }
            }
        }
    }
    if(x==0)
        cout<<"\n no even elements in the array \n";
    else
    {
        cout<<"\n even elements\n";
        for(int i=0;i<x;i++)
            cout<<e[i]<<" ";
    }
    if(y==0)
        cout<<"\n no odd elements in the array \n";
    else
    {
        cout<<"\nodd elements\n";
        for(int i=0;i<y;i++)
            cout<<o[i]<<" ";
    }

    if(z==0)
    {
        cout<<"\n no prime numbers in the array\n";
        int v=rand()%n;
        cout<<"\n selecting number"<<a[v];
        int i=0,count1=0,count2=0,b,c;
        while(1)
        {
            i++;
            int num1=a[v]+i;
            int num2=a[v]-i;
            if(primeno(num1))
            {
                count1++;
                b=num1;
            }
            if(primeno(num2))
            {
                count2++;
                c=num2;
            }
            if(count1<count2)
            {
                cout<<"\n prime number"<<c;
                break;
            }
            else if(count2<count1)
            {
                 cout<<"\n prime number"<<b;
                 break;
            }
            if((primeno(num1)==true)&&(primeno(num1)==true))
            {
                cout<<"\n prime number"<<num1<<" "<<num2;
                break;
            }
        }
    }
    else
    {
        cout<<"\nprime elements\n";
        for(int i=0;i<z;i++)
            cout<<p[i]<<" ";
    }
    }
    else
        cout<<"size is zero"<<endl;
	return 0;
}

bool primeno(int num)
{
    int count=0;
    for(int x=1;x<=num/2;x=x+2)
    {
        if(count<=2)
        {
            if(num%x==0)
                count++;
        }
    }
    if(count<2)
    {
        return true;
    }
    return false ;
}
