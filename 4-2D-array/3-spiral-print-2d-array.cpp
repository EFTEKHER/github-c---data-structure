#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
void spiralprint(int a[][100],int m,int n)
{
    int startRow=0;
    int startCol=0;
    int endRow=m-1;
    int endCol=n-1;
    //print 
    while(startRow<=endRow && startCol<=endCol)
    {

// for first row;
for(int i=startCol;i<=endCol;i++)
{ 
    cout<<a[startRow][i]<<"\t";
}

startRow++;
//for last column
for(int i=startRow;i<=endRow;i++)
{
    cout<<a[i][endCol]<<"\t";
}
endCol--;

//bottom row
if(endRow>startRow)
{
    for(int i=endCol;i>=startCol;i--)
{
    cout<<a[endRow][i]<<"\t";
}
endRow--;
}

//startcol;
if(endCol>startCol)
{
    for(int i=endRow;i>=startRow;i--)
{
    cout<<a[i][startCol]<<"\t";
}
startCol++;
    }
    }
}    
        
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
  for(int i=0;i<=m-1;i++)
  {
    for(int j=0;j<=n-1;j++)
    {
        a[i][j]=val;
        val+=1;
        cout<<a[i][j]<<"\t";
    }
    cout<<endl;
  }   
  spiralprint(a,m,n);
  
return 0;
}
