/*
code written by Eftekher Ali Efte from Bangladesh
 email:eftekherali2000@gmail.com
pursuing computer science and engingeering in Ruet
*/
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#define ull unsigned long long int
#include <ctype.h>
using namespace std;
vector<int> primeSieve(int *p, int n)
{

    vector<int> primes;

    for (long long i = 2; i <= n; i++)
    {
        if (p[i] == 0)
        {
            // stores i in the prime vector
            primes.push_back(i);
            // marks all multiples of i as not prime

            for (long long j = i * i; j <= n; j += i)
            {
                p[j] = 1;
            }
        }
    }
    // for(auto x: primes)
    // {
    //     cout<<x<<" ";
    // }
    return primes;
}
int divisor(vector<int> &primes, int m)
{
    int ans = 1;
    int p = primes[0];
    int i = 0;
    while (p * p <= m)
    {
        if (m % p == 0)
        {
            int count = 0;
            while (m % p == 0)
            {
                count++;
                m = m / p;
            }
            ans = ans * (count + 1);
        }
        i++;
        p = primes[i];
    }

    if (m != 1)
    {
        ans = ans * 2;
    }
    return ans;
}

int main()
{
    int N = 1000;
    int p[N] = {0};
    vector<int> primes = primeSieve(p, 100);
    int x;
    cin >> x;
    int div = divisor(primes, x);
    cout << div << endl;
    return 0;
}
