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
    int res=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
res=res^x;
    }
    cout<<"unique is"<<res<<endl;
        
return 0;
}
