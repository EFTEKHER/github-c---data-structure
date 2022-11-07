#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#define ull unsigned long long int
#include<ctype.h> 
using namespace std;
      
        
int main()
{
    int a=10;
    int b=7;
    cout<<" a :"<<a<<"  "<<" b:"<<b<<endl;
    swap(a,b);
     cout<<" a :"<<a<<"  "<<" b:"<<b<<endl;   

     cout<<max(a,b)<<endl;
     cout<<min(a,b)<<endl;
     int arr[]={1,2,4,5,6,7,8,9};
     int  n=sizeof(arr)/sizeof(int);
     reverse(arr,arr+n);
     for(int i=0;i<n;i++)
     {
       cout<<arr[i]<<" ";
     }

return 0;
}
