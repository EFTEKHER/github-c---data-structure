#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<ctype.h> 
using namespace std;
      
        
int main()
{

 int n;
 cin>>n;
 int arr[1005]; 
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 sort(arr,arr+n);
 int x;
 cin>>x;

 for(int i=0;i<n;i++)
 {
    int left=i+1;
    int right=n-1; 
    while(left<right) 
    {
        if(arr[i]+arr[left]+arr[right]==x)
        {
            cout<<arr[i]<<"  "<<arr[left]<<"  "<<arr[right]<<endl;
            left++;
            right--;
        }
        else if(arr[i]+arr[left]+arr[right]>x)
        {
            right--;
        }
        else 
        {
            left++;
        }
    }
 }
        
return 0;
}
