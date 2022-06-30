#include<iostream>
 #include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
      
        
int main()
{
int left=-1,right=-1;
    int a[1000],n;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }   

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<j;k++)
            {
                cout<<a[k]<<",";
            }
            cout<<endl;
        }
    }  

    cout<<"maximum sub Array sum"<<endl;

int maxsum=0;
int currentsum=0;
//kadanes algorithm for maximumSum

for(int i=0;i<n;i++)
{
    currentsum=currentsum+a[i];
    if(currentsum<0)
    {
        currentsum=0;
    }
    maxsum=max(currentsum,maxsum);
}
 cout<<" largest subArray Maximum sum is:"<<maxsum<<endl;
return 0;
}
