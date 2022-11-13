#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#define ull unsigned long long int
#include <ctype.h>
using namespace std;
bool canPlaceCows(int stalls[], int n, int c, int min_sep)
{
    int last_cows = stalls[0];
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (last_cows - stalls[i] >= min_sep)
        {
            last_cows = stalls[i];
            cnt++;
            if (cnt == c)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int stalls[] = {1, 2, 4, 8, 9};
    int n = 5;
    int cows = 3;
    int s = 0;
    int e = stalls[n - 1] - stalls[0];
    int ans = 0;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        bool cowsCanIkeep = canPlaceCows(stalls, n, cows, mid);
        if (cowsCanIkeep)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
