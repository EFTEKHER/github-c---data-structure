#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#define ull unsigned long long int
#include <ctype.h>
using namespace std;

int main()
{

    // pair
    pair<int, char> p;
    p.first = 10;
    p.second = 'E';
    // Another way
    pair<int, char> p2(p);
    cout << p2.first << " " << p2.second << endl;

    pair<int,string> p3=make_pair(1000,"Efte");
    cout << p3.first << " " << p3.second << endl;

    //take input;
    int a,b;
    cin>>a>>b;
    pair<int,int>p4=make_pair(a,b);
    //Array of pairs
    //vector of pairs 
    pair<pair<int,int>,string>car;
    car.first.first=10;
    car.first.second=20;
    car.second="Audi";

    cout<< car.first.first<<"     "<<
    car.first.second<<"   "<<
    car.second<<endl;
    return 0;
}
