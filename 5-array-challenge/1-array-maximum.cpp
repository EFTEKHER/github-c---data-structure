#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
 int mAx(int a[], int n)
 {
int largest=INT_MIN;
for(int i=0;i<n;i++)
{
    if(a[i]>largest)
    {
        largest=a[i];
    }
}
return largest;
 }     
        
int main()
{

    int a[100]; 
   int n,m;
   cin>>n;
   int val=1;
   for(int i=0;i<n;i++)
   {
  
       a[i]=val;
       val++;
    
   }  
cout<<mAx(a,n);

return 0;
}
