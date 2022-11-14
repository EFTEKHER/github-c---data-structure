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

void display(vector<int> e)
{
    for (auto it = e.begin(); it != e.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> d{2, 3, 4, 5, 6, 7};
    // push back O(1) for the most case
    d.push_back(16);
    d.push_back(32);
    display(d);
    // pop  back O(1) for the most case

    d.pop_back();
    display(d);
    // insert in the middle
    d.insert(d.begin() + 3, 100);
    display(d);
    //
    d.insert(d.begin() + 3, 5, 4);
    display(d);
    // earse
    //  d.erase(d.begin()+3);
    //  display(d);

    // d.erase(d.begin() + 2, d.begin() + 4);
    // display(d);

    cout << d.size() << endl;
    cout << d.capacity() << endl;

    //  // we avoid the shrink

    d.resize(36); // if the size is increasing more memory will allocated
    cout << d.capacity() << endl;

    // remove all elementS  of the vector .but doesnot  delete the memory occupied by the array

    d.clear();
    display(d);
    if (d.empty())
    {
        cout << " This is an empty vector " << endl;
    }
    cout << d.size() << endl;

    d.push_back(11);
    d.push_back(23);
    d.push_back(39);

    display(d);

    cout << d.front() << endl;

    vector<int> v; // double memory
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        cout << "capacity :" << v.capacity() << endl;
    }
    display(v);
    // for avoid doubling we can use reserve
    vector<int> c;
    int h;
    cin >> h;
    c.reserve(200);
    for (int i = 0; i < h; i++)
    {
        int x;
        cin >> x;
        c.push_back(x);
        cout << "capacity :" << c.capacity() << endl;
    }
    display(c);
    cout << c.capacity() << endl;
    return 0;
}
