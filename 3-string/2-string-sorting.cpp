#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
 //for comparing length

 bool compare(string a,string b)
 {
    if(a.length()==b.length())

    {
       return  a<b;
    }
    return a.length()>b.length();
 }     
        
int main()
{
  int n;
  cin>>n;
  cin.get();
  string s[100];
  for(int i=0;i<n;i++)
  {
getline(cin,s[i]);
  } 
   for(int i=0;i<n;i++)
  {
cout<<s[i]<<endl;
  } 

  cout<<"after sorting "<<endl;
  sort(s,s+n);
   for(int i=0;i<n;i++)
  {
cout<<s[i]<<endl;
  } 
  cout<<" length  by sort"<<endl;
    sort(s,s+n,compare);
     sort(s,s+n);
   for(int i=0;i<n;i++)
  {
cout<<s[i]<<endl;
  }   
return 0;
}
