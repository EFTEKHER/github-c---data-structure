#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<ctype.h> 
using namespace std;

  //pass by value //copy value
  void increement(int a)
  {
a=a+1;
cout<<"Inside Function "<<a<<endl;
  }    


        
int main()
{
    int a=10;
    increement(a);
    cout<<" inside main "<<a<<endl;
        
return 0;
}
