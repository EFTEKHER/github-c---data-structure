#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#define ull unsigned long long int
#include<ctype.h> 
using namespace std;
      
        
int main()
{
    //allocation+ dealloction done by compiler
  int a[1000];
  cout<<sizeof(a)<<endl;
  // a symbol table .here a can not be overwriten , a can only read only memory

//heap
 //static part
  int *aptr=
  //heap part
  new int(1000);
  cout<<sizeof(aptr)<<endl;  
  int n;
  cin>>n;
  //dynamic allocation (on the fly)
int *arr=new int [n]{0}; //variable arr is created inside the static memory ->it can be over written

  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    cout<<arr[i]<<endl;
  }  
  //free up space
  delete  []arr;
return 0;
}
