#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<ctype.h> 
using namespace std;

  //pass by reference  using pointer

  void increement(int *aptr)
  {
*aptr=*aptr+1;
cout<<"Inside Function "<<*aptr<<endl;
  }    


        
int main()
{
    int a=10;
    increement(&a);
    cout<<" inside main "<<a<<endl;
        
return 0;
}
