#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
 /*
Given a sorted array,find pair of elements that sum to k (Given)
1,3,5,7,10,11,12,13
*/     
        
int main()
{
  int a[]={1,3,5,7,10,11,12,13};  
  //pair of sum is looking 16 
  int s=16;
  int i=0;
  int currentsum=0;
  int j=sizeof(a)/sizeof(int)-1;
  while(i<j)
  {
    currentsum=a[i]+a[j];
    if(currentsum>s)
    {
        j--;
    }
    else if(currentsum<s)
    {
        i++;
    }
    else if(s==currentsum)
    {
cout<<a[i]<<" and "<<a[j]<<endl;
i++;
j--;
    }

  }   
return 0;
}
