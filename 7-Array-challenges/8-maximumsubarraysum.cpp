#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<ctype.h> 
using namespace std;

 int maxsubArraySum(int arr[],int n)
 {
    int max=INT_MIN;
    int result=0;
    for(int i=0;i<n;i++)
    {
        result+=arr[i];
        if(max<result)
        {
            max=result;
        }
        if(result<0)
        {
            result=0;
        }

    }
return max;

 }     
        
int main()
{

    int n;
    int arr[1000];
    int t;
    cin>>t;
    while(t--) 
    {
        cin>>n;
        for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }  
    cout<<maxsubArraySum(arr,n)<<endl;
    }
     
return 0;
}
