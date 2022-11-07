#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#define ull unsigned long long int
#include <ctype.h>
using namespace std;
// define a comparator function
bool comparator(int a, int b)
{
    return a < b;
}
// bool comparator desacending order
bool comparatorDes(int a, int b)
{
    return a > b;
}

int main()
{
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "ascending operator " << endl;
    sort(a, a + n, comparator);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ",";
    }
    cout<<endl;
    cout << "Descending operator :" << endl;
    sort(a, a + n, comparatorDes);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ",";
    }
    return 0;
}
