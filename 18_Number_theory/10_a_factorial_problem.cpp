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
 //n!%(k^x)=0     
        
int main()

{
    int n,k;
    cin>>n>>k;
    int temp=n;
    int sum=0;
    
    for(int i=1;temp!=0;i++)
    {
       int x= floor(n/pow(k,i));
        sum+=x;
        temp= floor(n/pow(k,i));
      
    }
    cout<<sum<<endl;
        
return 0;
}
