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
     int no;
     int ans=0;

     for(int i=0;i<n;i++)
     {
        cin>>no;
        ans=no^ans;

     } 
     cout<<" unique number :"<<ans<<endl;  
return 0;
}
