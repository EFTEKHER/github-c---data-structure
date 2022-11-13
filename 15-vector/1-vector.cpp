#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#define ull unsigned long long int
#include<ctype.h> 
using namespace std;
      
        
int main()
{
    vector<int> a;
    vector<int> b(5,10);// five int with 0
    vector<int> c(b.begin(),b.end());
    vector <int> d{1,2,3,4,5,6,7};

  //iterate how to iterate over vector

  for(int i=0;i<d.size();i++)
  {
    cout<<d[i]<<" ";
  } 
  cout<<endl;
  for(auto it=b.begin(); it!=b.end();it++)
  {
    cout<<*it<<" ";
  } 
    cout<<endl;
    for(int x:d)
    {
        cout<<x<<" ";
    } 
    cout<<endl;
    int n; 
    vector<int> e;
    cout<<"Enter amount :";
    cin>>n;
    for(int i=0; i<n;i++)
    {
        int x;
        cin>>x;
        e.push_back(x);

    }
    for(auto it=e.begin(); it!=e.end();it++)
  {
    cout<<*it<<" ";
  } 

cout<<e.size()<<endl;
cout<<e.capacity()<<endl; //size of underlying array
cout<<e.max_size()<<endl; //maximum size in worst case
return 0;
}
