#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<ctype.h> 
using namespace std;

        
int main()
{
   int arr[10][10];
   int n,m;
   cin>>m>>n;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
}
for (int col = 0; col < n; col++)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < m; row++)
            {
                // top->down
                cout << arr[row][col] << ",";
            }
            // cout<<endl;
        }

        else
        {
            for (int row = m - 1; row >= 0; row--)
            {
                // top->down
                cout << arr[row][col] << ",";
            }
            // cout<<endl;
        }
    }
return 0;
}
