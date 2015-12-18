#include<iostream>
using namespace std;
int main()
{
    unsigned int n;
    cout<<"enter n";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                a[i][j]=0;
            else
            {
                a[i][j]=-1;
                a[j][i]=1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
	return 0;
}
