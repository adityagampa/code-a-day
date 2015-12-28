#include<iostream>
using namespace std;
int main()
{
   int num[3]={3,4,5},i,j;
   int rem[3]={2,3,1},size;
   int size1=sizeof(num)/sizeof(num[0]); 
   int size2=sizeof(rem)/sizeof(rem[0]);
   if(size1==size2)
   {
     size=size1;
   //else
     //  ;
     for(i=size+1;;i++)
     {
       int count=0;
       for(j=0;j<size;j++)
       {
            if(i%num[j]!=rem[j])
            {
               break;
            }
            else
            {
               count++;
            }
            if(count==size)
            {
                cout<<i<<endl;
                return 0;
            }
       }
    }
   }
}
