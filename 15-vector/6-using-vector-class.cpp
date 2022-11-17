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
#include "Vector.h"
using namespace std;

int main()
{
    Vector<int> v;
    v.push_back(15);
    v.push_back(16);
    v.push_back(17);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
cout<<v.capacity()<<endl;
    return 0;
}
