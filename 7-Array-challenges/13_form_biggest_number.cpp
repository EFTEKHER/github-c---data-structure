#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
// compare function find largest number
int Compare(string x, string y)
{
    // xy
    string xy = x.append(y);
    // yx
    string yx = y.append(x);

    return xy.compare(yx) > 0 ? 1 : 0;
}

void form_biggest_number(vector<string> s1)
{
    sort(s1.begin(), s1.end(), Compare);

    for (int i = 0; i < s1.size(); i++)
    {
        cout << s1[i];
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> s1;
        for (int i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            s1.push_back(x);
        }
        form_biggest_number(s1);
    }
    return 0;
}
