#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#define ull unsigned long long int
#include<ctype.h> 
using namespace std;
      
        
int main()
{
  int arr[]={10,20,40,40,40,50,60,70,80,90,100,1100};
  int n=sizeof(arr)/sizeof(int);
  int key;
  cin>>key;
  bool present=binary_search(arr,arr+n,key);
  if(present)
  {
    cout<<"present"<<endl;
  }  
  else
  {
    cout<<"absent"<<endl;
  }  

  //Two more things
  //Get the index of the element 

  //lower_bound(s,e,key) , upper_bound(s,e,key)
  auto it=lower_bound(arr,arr+n,40); 
  cout<<"lower bound of 40:::"<<(it-arr)<<endl;
  auto et=upper_bound(arr,arr+n,40);
  cout<<" upper bound of 40::"<<(et-arr)<<endl;

  cout<<"Frequency of an element "<<(et-it)<<endl;

  if((it-arr)==n)
  {
    cout<<" not present "<<endl;
  }
  else  
  {
    cout<<"Present"<<endl;
  }
return 0;
}
