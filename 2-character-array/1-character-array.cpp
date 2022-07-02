#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
      
        
int main()
{
  int b[]={1,2,3};
  cout<<"getting the first address of the array "<<b<<endl;

  char a[]={'a','b','c','d','e','\0'};
  cout<<" getting full array "<<endl;
  cout<<a<<endl; 

  //input
  char s[10];
  cin>>s;
  cout<<s<<endl; 
  char s1[]={'h','e','l','l','o'};
  char s2[]="hello";
  cout<<sizeof(s1)<<endl;
  cout<<sizeof(s2)<<endl;
return 0;
}
