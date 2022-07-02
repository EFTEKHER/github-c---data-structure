#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
void remove_duplicates(char a[])   
        {
int prev=0;
int n=strlen(a);
if(n==0 || n==1)
{
        return;
}
for(int current=1; current<n;current++)
{
       if(a[current]!=a[prev])
       {
        prev++;
        a[prev]=a[current];
        
       } 
}
a[prev+1]='\0';
return;
        }
int main()
{

      char a[1000];
    cin.getline(a,1000);  
    remove_duplicates(a);
    cout<<a<<endl;
return 0;
}
