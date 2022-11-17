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
class car
{
public:
    string car_name;
    int x, y;
    car() {}
    car(
        string car_name, int x, int y)
    {
        this->car_name = car_name;
        this->x = x;
        this->y = y;
    }
    int dist()
    {
        return x*x+y*y;
    }
};
bool compare(car A,car B){
int da=A.dist();
int db=B.dist();
if(da==db)
{
    return A.car_name.length()<B.car_name.length();
}
return da<db;
}
void display(vector<car>b)
{
    for(auto x:b)
    {
        cout<<" car name:"<<x.car_name<<"  x: "<<x.x<<" y: "<<x.y<<endl;
    }
}
int main()
{
    int n;
    vector<car> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string name;
        int x,y;
        cin>>name>>x>>y;
        car temp(name,x,y);
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),compare);
    display(v);
    return 0;
}
