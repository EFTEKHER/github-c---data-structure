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

// This return a vector of primes
vector<int> factorize(int m, vector<int> &primes)
{
    vector<int> factors;
    factors.clear();

    int i = 0;
    int p = primes[0];
    while (p * p <= m)
    {
        cout<<"p:"<<p<<endl; 
        // cout<<"m:"<<m<<" ";
        if (m % p == 0)
        {cout<<"m:"<<m<<endl;
            factors.push_back(p);
           
            while (m % p == 0)
            {
                m = m / p;
                cout<<"m:"<<m<<endl;
            }
        }
        i++;
        p = primes[i];
    }
   // cout<<m<<endl;
    if(m!=1)
    {cout<<"here :"<<m<<endl;
        factors.push_back(m)  ;  }
    return factors;
}
int main()
{

    int N = 1000;
    int p[N] = {0};
    vector<int> primes = primeSieve(p, 100);
    int t;
    cin >> t;
    while (t--)
    {
        int no;
        cin >> no;
        vector<int> factors = factorize(no, primes);
        for (auto f : factors)
        {
            cout << f << " " << endl;
        }
    }

    return 0;
}
