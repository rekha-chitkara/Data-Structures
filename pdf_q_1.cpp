//TO FIND THE MAX DIFFERENCE BETWEEN ALL THE ELEMENTS
#include<iostream>
using namespace std;
int main()
{
int arr[50],i=0,n,b[50],count=0,flag=-1,j=1;
cout<<"Enter the number of elements : ";
cin>>n;
for(i=0;i<n;i++)
{
 cin>>arr[i];
}
cout<<"Array entered by you : ";
for(i=0;i<n;i++)
{
 cout<<arr[i]<<" ";
}
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(flag<arr[j]-arr[i])
  {
   flag=arr[j]-arr[i];
  }
 }
}
cout<<flag;
return 0;
}

