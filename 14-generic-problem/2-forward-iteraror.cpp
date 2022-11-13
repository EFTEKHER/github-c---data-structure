#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#define ull unsigned long long int
#include<ctype.h> 
#include <fstream>  
#include <iterator> 
using namespace std;
template<class ForwardIterator ,class T > 

ForwardIterator Search(ForwardIterator start ,ForwardIterator end,T key)
{
    while(start !=end)
    {
        if(*start== key)
        {
            return start;
        }
        start++;
    }
    return end;
}
        
int main()
{
  list<int> l;
  l.push_back(1);
  l.push_back(3);
  l.push_back(5);
  l.push_back(7);
  auto it=Search(l.begin(),l.end(),5);
if(it==l.end())
{
    cout<<"Element not found "<<endl;
}
else 
{
    cout<<" Element Found "<<"at :" <<endl;
    cout<<*it<<endl;
}

return 0;
}
