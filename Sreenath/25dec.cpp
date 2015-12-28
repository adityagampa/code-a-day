#include<iostream>
using namespace std;
int main()
{
   int size,count=0,k;
   cout<<"Enter the size of array"<<endl;
   cin>>size;
   int a[size];
   if(size>1)
   {
      cout<<"Enter elements of the array"<<endl;
      for(int i=0;i<size;i++)
      {
        cin>>a[i];
      }
      for(int i=0;i<size;i++)                       //Elements 
      {                                             //into groups 
         for(int j=i+1;j<size;j++)                  //of 2 elements
         {  
             k=a[i]+a[j];
             if(k%3==0)
             {
                cout<<"{"<<a[i]<<","<<a[j]<<"}"<<endl;
                count++;
             }
         }
      }
      for(int i=0;i<size;i++)                          //Elements into
      {                                                //Groups of
          for(int j=i+1;j<size;j++)                    //3 elements
          {
              for(int l=j+1;l<size;l++)
              {
                  k=a[i]+a[j]+a[l];
                  if(k%3==0)
                  {
                     cout<<"{"<<a[i]<<","<<a[j]<<","<<a[k]<<"}"<<endl;
                     count++;
                  }
              }
          }
      }
      cout<<"count is "<<count<<endl;
  }
}
