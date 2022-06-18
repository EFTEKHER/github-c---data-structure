#include<iostream>
 #include<stdio.h>
#include<stdlib.h>
using namespace std;
      
        
int main()
{
    //Linear search
    // A particular element in the array
    int a[1000];
    int n,key;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
//Ask the element we want to search;
cout<<"Enter your element "<<endl;
cin>>key;

//Find out the index of that element traversing the array;
for(int i=0;i<=n-1;i++)
{
    if(a[i]==key)
    {
        cout<<key<<" found at "<<i <<" index"<<endl;
        break;
    }
    if(i==n-1)
    {
        cout<<" not present in the array "<<endl;
    }
}


return 0;
}
