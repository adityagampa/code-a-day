#include<iostream>
using namespace std;
int i,j;
int main()
{
    int n;
    cout<<"Enter n value to display n*n matrix";
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
          for(j=0;j<n;j++)
          {
                if(i==j)
                {
                    a[i][j]=0;
                }
                if(i<j)
                {
                    a[i][j]=1;
                }
                if(i>j)
                {
                   a[i][j]=-1;
                }
          }
    }
    
      for(i=0;i<n;i++)
      {
            cout<<endl;
            for(j=0;j<n;j++)
            {
                   cout<<a[i][j]<<"    ";
            }
    
      }
    return 0;
}
