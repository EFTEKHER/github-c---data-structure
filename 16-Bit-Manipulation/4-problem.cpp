/*
code written by Eftekher Ali Efte from Bangladesh 
 email:eftekherali2000@gmail.com
pursuing computer science and engingeering in Ruet 
*/
#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#define ull unsigned long long int
#include<ctype.h> 
using namespace std;
  int clearRangeItoJ(int &n,int i,int j)
{
    int a=(~0)<<(j+1);
    int b=(1<<i)-1;
    int result =a|b;
    return n&result;
} 
int replaceBits(int n,int m,int i,int j)
{
    n=clearRangeItoJ(n,i,j);
    int ans=n|(m<<i);
    return ans;
}        
int main()
{
int n=15;
int i=1;
int j=3;
int m=2;
cout<<replaceBits(n,m,i,j)<<endl;

        
return 0;
}
