#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<ctype.h> 
using namespace std;
      
        
int main()
{
    int x=10;
    cout<<&x<<endl;
    float y=13.45;
    cout<<&y<<endl;
   //you cannot bring the address of character
   char ch='A';
   cout<<&ch<<endl;
   //but if you explicit typecast from *char to *void it will give you address
   cout<<(void*)&ch<<endl;

// store address to variable and pointers
//pointers
//reassign other variable
int *xptr=0;
xptr=&x;
cout<<&x<<endl;
cout<<xptr<<endl;
int y1=12;
xptr=&y1;
cout<<xptr<<endl;



return 0;
}
