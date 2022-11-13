#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#define ull unsigned long long int
#include<ctype.h> 
using namespace std;
template<typename T>

int search(T arr[],int n,T key)
{
    T x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return n;
}
        
int main()
{
    int a[]={1,2,3,5,7,9};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    cout<< " integer arrays :"<<search(a,n,key)<<endl;


    float arr[]={2.67,3.67,4.68,9.5564,10.2};
    int n1=sizeof(arr)/sizeof(float);
    float key1;
    cin>>key1;
    cout<<"float keys :"<<search(arr,n1,key1)<<endl;

        
return 0;
}
