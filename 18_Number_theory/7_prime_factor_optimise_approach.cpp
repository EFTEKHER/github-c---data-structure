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
      
        
int main()
{

int n;
cin>>n;
vector<int>primefactors;
int x=0;
for(int i=2;i*i<=n;i++)
{
    if(n%i==0)
    {
        primefactors.push_back(i);

        while(n%i==0)
        {
            n=n/i;
        }
    }
   
x=n;
    
}
if(x!=1)
{
    primefactors.push_back(n);
}
for(auto x:primefactors)
{
    cout<<x<<" ";
}
        
return 0;
}
