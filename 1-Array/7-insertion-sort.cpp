#include<iostream>
 #include<stdio.h>
#include<stdlib.h>
using namespace std;
 void insertion_sort(int a[],int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int e=a[i];
    //place the current element at 'right' position in the sorted part
    int j=i-1;
    while(j>=0 && a[j]>e)
    {   
        a[j+1]=a[j];
        j=j-1;

    }
    a[j+1]=e;
    
    }
}  
        
int main()
{
  int a[1000];
  int n, key;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  insertion_sort(a,n);
  cout<<" printing array "<<endl;
for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl; 


        
return 0;
}
