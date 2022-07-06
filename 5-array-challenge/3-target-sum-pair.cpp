#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
 void pairsum(int a[],int n,int x)
 {
    int left=0;
    int right=n-1;
    sort(a,a+n);
    while(left<right)
    {
        if(a[left]+a[right]==x)
        {
            cout<<a[left]<<"  "<<a[right]<<endl;
        }
        if(a[left]+a[right]>x)
        {
         right--;
        }
        else
        {
            left++;
        }
    }
 }     
        
int main()
{
    int a[100];
int n;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];

}
int x;
cin>>x;
pairsum(a,n,x);
        
return 0;
}
