#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#define ull unsigned long long int
#include <ctype.h>
using namespace std;
int *fun()
{
    int *a = new int[5];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    cout << a << endl;
    cout << a[0] << endl;
    return a;
}

int main()
{
    int *b = fun();
    cout << b << endl;
    cout << b[0] << endl;
    delete[] b;
    return 0;
}
