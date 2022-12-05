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

const int n = 10000000;
bitset<10000005> b; // you were not making it of size 1e7.
vector<int> primes;

void seieve()
{

    b.set(); // set all the numbers to 1
    b[0] = b[1] = 0;
    primes.push_back(2);
    for (long long int i = 3; i <= n; i += 2)
    {
        if (b[i] == 1)
        {
            primes.push_back(i);
            for (long long int j = i * i; j <= n; j += i)
                b[j] = 0;
        }
    }
}

bool isPrime(long long no)
{
    if (no <= n)
        return b[no] == 1 ? true : false;

    for (long long int i = 0; primes[i] * (long long)primes[i] <= no; i++)
    {
        if (no % primes[i] == 0)
            return false;
    }
    return true;
}

int main()
{
    seieve();
    // 2147483647 10 digit
    if (isPrime(2147483647))
    {
        cout << "yes, prime " << endl;
    }
    else
    {
        cout << "Not,prime " << endl;
    }

    return 0;
}
