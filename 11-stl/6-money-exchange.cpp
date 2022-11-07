#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#define ull unsigned long long int
#include <ctype.h>
using namespace std;
bool compare(int a, int b)
{
    // cout<<" compare :"<<a<<" and "<<b <<endl;
    return a <= b;
}

int main()
{
    // indian money change
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int n = sizeof(coins) / sizeof(int);
    int money = 168;
    while (money > 0)
    {
        auto l_b = lower_bound(coins, coins + n, money, compare) - coins - 1;
        int m = coins[l_b];
        cout << m << ",";
        money = money - m;
    }

    return 0;
}
