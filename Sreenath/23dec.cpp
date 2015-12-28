#include<iostream>
using namespace std;
void equalnumbers(int*arr1,int len1,int*arr2,int len2,int*arr3,int len3);
int main()
{  
    int len1,len2,len3;
    cout<<"Enter lengths of arrays "<<endl;
	cin>>len1>>len2>>len3; 
    int arr1[len1],arr2[len2],arr3[len3];
    len1=sizeof(arr1)/sizeof(arr1[0]);
    len2=sizeof(arr2)/sizeof(arr2[0]);
    len3=sizeof(arr3)/sizeof(arr3[0]);
    cout<<"enter elements of arr1"<<endl;
   for(int i=0;i<len1;i++)
   {
      cin>>arr1[i];
   }
   cout<<"enter elements of arr2"<<endl;
   for(int j=0;j<len2;j++)
   {
      cin>>arr2[j];
   }
   cout<<"enter elemest of arr3"<<endl;
   for(int k=0;k<len3;k++)
   {
      cin>>arr3[k];
   }
   equalnumbers(arr1,len1,arr2,len2,arr3,len3);
   return 0;
}
void equalnumbers(int*arr1,int len1,int*arr2,int len2,int*arr3,int len3)
{
    int i,j,k;
    for(i=j=k=0;i<len1 && j<len2 && k<len3;)
    {
       if((arr1[i]<arr2[j]) && (arr2[j]<arr3[k]))
           i++;
       else if((arr2[j]<arr1[i]) && (arr2[j]<arr3[k]))
           j++;
       else if((arr3[k]<arr1[i]) && (arr3[k]<arr2[j]))
	       k++;
	   else
	   {
	      cout<<"common numbers are"<<endl;
	       cout<<arr1[i]<<endl;
	       i++;
	       j++;
	       k++;
	   } 
    }
}
   
