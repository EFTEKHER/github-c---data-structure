#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
      
        
int main()
{
    //Read a list of strings and we will store them in 2D character array
    int n;
    char a[100][100];
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++)
    {
        cin.getline(a[i],1000);
    }
    //print out strings
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }    
return 0;
}
