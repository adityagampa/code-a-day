#include<iostream>
using namespace std;
#define max 10
void display(int *a,int n);
int main()
{
	int i,j=0,k=0,l=0,p,m,n,b=0,z,o=0,c,q,w=0,y,u=0,prime[max],even[max],odd[max],a[max];
	cout<<"enter the size\n";
	cin>>p;
	cout<<"enter the elements\n";
	for(i=0;i<p;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<p;i++)
	{
		if(a[i]%2==1)
		{
			odd[j++]=a[i];
		}
		else 
		{
			even[k++]=a[i];
		}
		n=0;
		for(m=2;m<(a[i]/2);m++)
		{	
			if(a[i]%m==0)
			{
				n++;	
			}
		}
		if(n==0)
		{
			prime[b++]=a[i];
		}
	}
	cout<<"\nodd elements are:";
	display(odd,j);
	cout<<"\n even elements are:";
	display(even,k);
	if(b>0)
	{
		cout<<"prime numbers are";
		display(prime,b);
	}
	else
	{
		cout<<"select any number from the entered elements";
		cin>>z;
		o=1;											//o is the difference from the selected number//
		while(o<z)
		{
			c=z-o;
			q=c;
			for(b=2;b<c/2;b++)
			{
				if(c%b==0)
				{
					w++;
				}
			}
			if(w==0)
			{
				cout<<"nearest prime number is"<<q;
				break;
				
			}
			else
			{
					c=z+o;
					q=c;
				for(b=2;b<c/2;b++)
				{
					if(c%b==0)
					{
					u++;
					}
				}
			if(u==0)
			{
				cout<<"nearest prime number is"<<q;
				break;	
			}
			o--;
			}
			
			
		}
	}		
		
}
void display(int *a,int n)
{
	int c;
	for(c=0;c<n;c++)
	{
		cout<<a[c]<<"\t";
	}
	cout<<"\n";
}
