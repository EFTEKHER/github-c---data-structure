#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
      
        
int main()
{
     int n;
     cin>>n;
     char a[1000];
     char Max[1000]; 
     int length=0;
     int largestLength=0;
     cin.get();
     for(int i=0;i<n;i++)
     {
        cin.getline(a,1000);
        length=strlen(a);
        if(length>largestLength){
            largestLength=length;
            strcpy(Max,a);
        }
     }
     cout<<Max<<" length is :"<<largestLength<<endl;

return 0;
}
