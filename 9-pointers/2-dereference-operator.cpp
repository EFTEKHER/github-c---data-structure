#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<ctype.h> 
using namespace std;
      
        
int main()
{

  int x=10;
  int *xptr;
  xptr=&x;
  cout<<&x<<endl;
  cout<<xptr<<endl;

  //
  cout<<*(&x)<<endl;
  cout<<*xptr<<endl;
  //

  cout<<&(*xptr)<<endl;
  cout<<*(&xptr)<<endl; 

  //
  cout<<&xptr<<endl;     
//double pointers to 
  int **xxptr=&xptr;
    cout<<xxptr<<endl;
return 0;
}
