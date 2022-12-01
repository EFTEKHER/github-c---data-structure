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
#define ll long long int
#include <ctype.h>
using namespace std;
// Naive Approach
// sqrt(n)
bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
// sieve Approach ----Generate a array Containing prime numbers
void prime_sieve(int *p)
{
    // first mark all odd numbers as prime;
    for (int i = 3; i <= 1000; i += 2)
    {
        p[i] = 1;
    }
    // sieve
    for (int i = 3; i <= 1000; i += 2)
    {
        if (p[i] == 1)
        {
            for (int j = i * i; j <= 1000; j = j + i)
            {
                p[j] = 0;
            }
        }
    }
    p[2] = 1;
    p[0] = p[1] = 0;
}
int main()
{
    int n;
    cin >> n;
    int p[1005] = {0};
    prime_sieve(p);

    for (int i = 0; i <= n; i++)
    {
        if (p[i] == 1)
        {
            cout << i << " ";
        }
    }

    return 0;
}
