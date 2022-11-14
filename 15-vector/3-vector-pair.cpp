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
bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    int d1 = p1.first * p1.first + p1.second * p1.second;
    int d2 = p2.first * p2.first + p2.second * p2.second;
    if (d1 == d2)
    {
        // compare with x co-ordinate
        return p1.first < p2.first;
    }
    return d1 < d2;
}
void display(vector<pair<int, int>> p)
{
    for (auto x : p)
    {
        cout <<"car:"<< x.first <<"   "<< x.second <<"   ";
        cout << endl;
    }
    
}

int main()
{
    int n;
    vector<pair<int, int>> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    //  display(v);
    sort(v.begin(), v.end(), comparator);
    cout << "after sorting" << endl;
    display(v);

    return 0;
}
