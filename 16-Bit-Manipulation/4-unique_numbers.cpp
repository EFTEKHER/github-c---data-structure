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

int main()
{
    int n;
cin>>n;
int a[n];
    int no;
    int Xor = 0;
    for (int i = 0; i < n; i++)
    {
      cin>>no;
      a[i]=no;
        Xor = Xor ^ no;
    }
    int pos = 0;
    int temp = Xor;
    int x = 0;
    int y = 0;
    while ((temp & 1) == 1)
    {
        pos++;
        temp = temp >> 1;
    }
    int mask = (1 << pos);
    for (int i = 0; i < n; i++)
    {
        if ((a[i] & mask) > 0)
        {
            x = x ^ a[i];
        }
    }
    y = Xor ^ x;
    cout << min(x, y) << " " << max(x, y) << endl;

    return 0;
}
