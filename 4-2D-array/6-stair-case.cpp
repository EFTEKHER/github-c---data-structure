#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int search(int a[][100],int n,int x)
{
if(n==0)
{
    return -1;
}
int smallest=a[0][0];
int largest=a[n-1][n-1];
if(x<smallest|| x>largest)
{
return -1;
}
int i=0;
int j=n-1;
while(i<n&&j>=0)
{
    if(a[i][j]==x)
    {
        cout<<"Element found at:"<<i<<"  "<<j<<endl;
    }
    if(a[i][j]>x)
    {
        j--;
    }
    else {
        i++;
    }
}
//cout << "n Element not found";
    return 0;
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
   int x;
   cin>>x; 
   search(a,n,x);     
return 0;
}
