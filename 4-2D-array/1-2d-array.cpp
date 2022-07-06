#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
      
        
int main()
{
  
  int m=5,n=5;
   cin>>m>>n;
  int a[100][100]={0};
 int val=1;
//   for(int i=0;i<=m-1;i++)
//   {
//     for(int j=0;j<=n-1;j++)
//     {
//         // cin>>a[i][j];
//     }
//   }    
  for(int i=0;i<=m;i++)
  {
    for(int j=0;j<=n;j++)
    {
        a[i][j]=val;
        val+=1;
        cout<<a[i][j]<<"\t";
    }
    cout<<endl;
  }     
return 0;
}
