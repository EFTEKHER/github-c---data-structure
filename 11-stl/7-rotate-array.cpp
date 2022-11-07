#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#define ull unsigned long long int
#include <ctype.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);

    rotate(arr, arr + 2, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    vector<int> a{10, 11, 34, 67, 90, 102};
    cout << endl;
    rotate(a.begin(), a.begin() + 3, a.end());
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout<< endl;
    // next_permutation
    next_permutation(a.begin(), a.end());

    for (auto x : a)
    {
        cout << x << ",";
    }
    cout<<endl;
    next_permutation(a.begin(), a.end());

    for (auto x : a)
    {
        cout << x << ",";
    }

    return 0;
}
