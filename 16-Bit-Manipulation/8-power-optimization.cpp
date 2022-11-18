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
 int power_optimise(int a,int n)
 {
    int res=1;
    while(n>0)
    {
        if(n&1)
        {
            res=a*res;
        }
        a=a*a;
        n=n>>1;
    }
    return res;
 }     
        
int main()
{
    int a,n;
    cin>>a>>n;
    cout<<power_optimise(a,n)<<endl;
        
return 0;
}
