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

const int N = 100000;
vector<int> primes;
int p[N] = {0};

void sieve()
{

    for (long long i = 2; i <= N; i++)
    {
        if (p[i] == 0)
        {
            // stores i in the prime vector
            primes.push_back(i);
            // marks all multiples of i as not prime

            for (long long j = i * i; j <= N; j += i)
            {
                p[j] = 1;
            }
        }
    }
}

int main()
{

    sieve(); // build this sieve for once

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m>> n;
        bool segmented[n - m + 1];
        for (int i = 0; i < n - m + 1; i++)
        {
            segmented[i] = 0;
        }
        // here see segmented sieve logic
        for (auto x : primes)
        {
            // stop the loop if the remaining prime numbers are not needed

            if (x * x > n)
            {
                break;
            }
            int start = (m / x) * x;
            // prime no lies  in the segment  sieve range
            if (x >= m && x <= n)
            {
                x = start * 2;
            }
            // mark all multiples of x, in the range start to n as not primes
            for (int i = start; i <= n; i += x)
            {
                segmented[i - m] = 1;
            }
        }
            for(int i=m; i<=n;i++)
            {
                if(segmented[i-m]==0 && i!=1)
                {
                    cout<<i<<" ";
                }
            }
    }
    //Loop over  range m.....n


    return 0;
}
