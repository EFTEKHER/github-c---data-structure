#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
void rotate_array(int a[][100],int n)  
{
//reverse each _row 
for(int row=0;row<n;row++)
{
  int start_col=0;
  int end_col=n-1;
  while(start_col<end_col)
  {
    swap(a[row][start_col],a[row][end_col]);
    start_col++;
    end_col--;
  }  
}
//to take transpose

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(i<j)
        {
            swap(a[i][j],a[j][i]);
        }
    }
}
}  
 void rotate_stl(int a[][100],int n)
 {
    for(int i=0;i<n;i++)
    {
        //reverse row pointer
        reverse(a[i],a[i]+n);
    }
    //to take transpose

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(i<j)
        {
            swap(a[i][j],a[j][i]);
        }
    }
}
 }       
int main()
{
   int a[100][100]; 
   int n;
   cin>>n;
   int val=1;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        a[i][j]=val;
        val++;
    }
   }

   cout<<endl;
    for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        cout<<a[i][j]<<"\t";
    }
    cout<<endl;
   }   
  // rotate_array(a,n);
  rotate_stl(a,n);
     cout<<endl;
    for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        cout<<a[i][j]<<"\t";
    }
    cout<<endl;
   }      
return 0;
}
