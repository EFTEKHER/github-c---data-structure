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
void decimalToBinary(int n)
{
    int ans=0;
    int p=1;
    while(n>0)
    {
        int last_digit=n&1;
        ans+=last_digit*p;
        n=n>>1;
        p=p*10;

    }
    cout<<"ans is:"<<ans<<endl;

}
        
int main()
{
    int n;
    cin>>n;
   decimalToBinary(n);

        
return 0;
}
