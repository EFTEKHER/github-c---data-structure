#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int a[100][100];

    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    for (int col = 0; col < n; col++)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < m; row++)
            {
                // top->down
                cout << a[row][col] << ",";
            }
            // cout<<endl;
        }

        else
        {
            for (int row = m - 1; row >= 0; row--)
            {
                // top->down
                cout << a[row][col] << ",";
            }
            // cout<<endl;
        }
    }

    return 0;
}
