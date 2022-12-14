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
   int gcd(int a,int b)
   {

    return b==0?a:gcd(b,a%b);

   }   
        
int main()
{
int x,y;
cin>>x>>y;
if(x>y)
{
    cout<<" GCD is :"<<gcd(x,y)<<endl;
}
else  
{
     cout<<" GCD is :"<<gcd(y,x)<<endl;
}
        
return 0;
}
