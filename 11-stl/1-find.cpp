#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#define ull unsigned long long int
#include <ctype.h>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 23, 45, 56,110};
    int n = sizeof(arr) / sizeof(int);
    // search->find
    int key;
    cin >> key;

    auto it = find(arr, arr + n, key);
    // cout << "Location :" << *it << endl;

    auto index=it-arr;
    

    if(index==n)
    {
        cout<<" Key is not present "<<endl;
    }
    else 
    {
        cout<<" key is present "<<endl;
        cout<<" Index is:"<<index<<endl;
    }
    return 0;
}
