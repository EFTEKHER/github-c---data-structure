#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

int main()
{
    int m = 5, n = 5;
    cin >> m >> n;
    int a[100][100] = {0};
    int val = 1;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            a[i][j] = val;
            val += 1;
        }
    }
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {

            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

cout<<endl;
    for (int i = 0; i < m; i++)
    {
        reverse(a[i], a[i] + m);
    }
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            // a[i][j]=val;
            // val+=1;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
//transpose diagonal same element

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
                swap(a[i][j],a[j][i]);
            }
        }
    
    }

    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            // a[i][j]=val;
            // val+=1;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
