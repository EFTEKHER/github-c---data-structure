#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<ctype.h> 
using namespace std;
      
        
int main()
{
    int a[1000],left[1000],right[1000];

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    left[0]=a[0];
    right[n-1]=a[n-1];

    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],a[i]);
    }

    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(right[i+1],a[i]);
    }

    int water=0;
    for(int i=0;i<n;i++)
    {
        water+=(min(left[i],right[i])-a[i]);
    }
    cout<<water<<endl;
        
return 0;
}
