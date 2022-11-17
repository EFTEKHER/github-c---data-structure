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
int countBits(int &n)
{
    int ans=0;
    while(n>0)
    {
        ans+=(n&1);
        n=n>>1;
    }
    return ans;
} 
        
int main()
{
      int n,i;
      cin>>n;

      cout<<countBits(n)<<endl;

return 0;
}
