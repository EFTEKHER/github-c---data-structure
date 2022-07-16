#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int sum_of_submatrices(int **a,int n,int m)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x=(i+1)*(j+1);
            int y=(n-i)*(m-j);
            sum+=a[i][j]*(x*y);
            // cout<<sum<<"\t";
        }
        
    }
    return sum;

}      
        
int main()
{
      
   int n,m;
   cin>>n>>m;
   int **arr=new int*[n];
   for(int i=0;i<n;i++)
   {
    arr[i]=new int[m];
   }
   for(int i=0;i<n;i++)

   {
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
   }
  cout<<  sum_of_submatrices(arr,n,m);
 
return 0;
}
