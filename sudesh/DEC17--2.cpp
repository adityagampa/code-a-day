#include<iostream>
using namespace std;
int main()
{
	int k,i,j,l;
	cout<<"enter your size\n";
	cin>>k;
	if(k<=0)
	{
		cout<<"invalid size";
		return -1;
	}
	int a[k],b[k];
	cout<<"\nenter the elements\n";
	for(i=0;i<k;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<k;i++)
	{
		b[i]=a[i]*a[i];
	}
	for(i=0;i<k;i++)
		{
			for(j=0;j<k;j++)
			{
				if(i==j|b[i]<b[j])				//there is no need to check for same numbers and number greater than it//
				{
					break;
				}
				for(l=0;l<k;l++)
				{
					if(l==j)
					{
						break;
					}
					
						if(b[i]==(b[j]+b[l]))
						{
							cout<<"pythogrean elements are"<<a[i]<<"\t"<<a[j]<<"\t"<<a[l]<<"\n";
						}	
				}	
			}
		}
		return 0;
}
