#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#define ull unsigned long long int
#include<ctype.h> 
using namespace std;
 int first_occurence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1; //explore the right side //ignore left side of array
        }
        else if (arr[mid] > key)
        {

            e=mid-1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}     
        
int main()
{
      int arr[]={1,2,3,3,3,3,3,4,5,6,7,8};
int n=sizeof(arr)/sizeof(int); 
   cout<<"Enter key:"<<endl;
   int key;
   cin>>key;
   cout<<first_occurence(arr,n,key);  
return 0;
}
