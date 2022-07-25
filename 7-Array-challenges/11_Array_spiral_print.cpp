#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<ctype.h> 
using namespace std;
void spiral_print(int a[][100],int m,int n)
{
    int start_row=0;
    int end_row=m-1;
     int start_col=0;
    int end_col=n-1;

    while(start_row<=end_row && start_col<=end_col)
     {
        for(int i=start_row;i<=end_row;i++)
        {
                cout<<a[i][start_col]<<" ";
        }
        start_col++;
        for(int i=start_col;i<=end_col;i++)
        {
            cout<<a[end_row][i]<<" ";
        }
        end_row--;

       if(start_col<end_col)
       {
         for(int i=end_row;i>=start_row;i--)
        {
            cout<<a[i][end_col]<<"  ";
        }
        end_col--;
       }
            if(start_row<end_row)
            {
                for(int i=end_col;i>=start_col;i--)
            {
                cout<<a[start_row][i]<<"  ";
            }
            start_row++;
            }
    }
}      
int main()
{
   int m=5,n=5;
   cin>>m>>n;
  int a[100][100]={0};
 int val=1;
  for(int i=0;i<=m-1;i++)
  {
    for(int j=0;j<=n-1;j++)
    {
         cin>>a[i][j];
    }
  }    
  for(int i=0;i<=m-1;i++)
  {
    for(int j=0;j<=n-1;j++)
    {
        // a[i][j]=val;
        // val+=1;
        cout<<a[i][j]<<"\t";
    }
    cout<<endl;
  }  
  spiral_print(a,m,n);      
return 0;
}
