#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#define ull unsigned long long int
#include<ctype.h> 
using namespace std;
      int binary_search(int arr[],int n,int key)
      {
        int s=0;
        int e=n-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(arr[mid]==key)
            {
                return mid;
            }
            else if(arr[mid]<key)
            {
                s=mid+1;
            }
            else 
            {
                e=mid-1;
            }
        }
      }       
int main()
{
   int n;
   cin>>n;
   int *arr=new int[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   } 
   cout<<"Enter key:"<<endl;
   int key;
   cin>>key;
   cout<<binary_search(arr,n,key); 

return 0;
}
