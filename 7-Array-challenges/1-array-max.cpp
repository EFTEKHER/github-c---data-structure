#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<ctype.h> 
using namespace std;
 long long int mAx(long long int arr[],long long int n)
 {
    long long int i=0,max=LONG_MIN;
for(i=0;i<n;i++)
{
    if(arr[i]>max) 
    {
        max=arr[i];
    }
}
return max;
 }     
        
int main()
{
  long long int i,n;

  cin>>n;
  long long int arr[n];
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }  

  cout<<mAx(arr,n);   
return 0;
}
