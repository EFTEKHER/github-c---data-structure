/*
code written by Eftekher Ali Efte from Bangladesh
 email:eftekherali2000@gmail.com
pursuing computer science and engingeering in Ruet
*/
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#define ull long long int
#include <ctype.h>
using namespace std;

int main()
{

    ull primes[] = {2, 3, 5, 7, 11, 13, 17, 19};
    int t;
    cin >> t;
    while (t--)
    {
        ull n;
        cin >> n;
        ull subsets = (1 << 8) - 1;
        int ans=0;
        for (ull i = 1; i < subsets; i++)
        {
            ull denom = 1ull;
            ull setBits = __builtin_popcountll(i);

            ull subsets = (1 << 8) - 1;

            for (int j = 0; j <= 7; j++)

            {
                if(i &(1<<j))
                {
                    denom=denom*primes[j];
                }
            }
            if(setBits&1)
            {
                ans+=(n/denom);
            }
            else {
                ans-=(n/denom);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
