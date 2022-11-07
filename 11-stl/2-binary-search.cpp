#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#define ull unsigned long long int
#include <ctype.h>
using namespace std;

int main()
{
    int arr[] = {1, 11, 34, 40,40,40,78, 89, 100};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    bool search = binary_search(arr, arr + n, key);
    if (search)
    {
        cout << "Element is present " << endl;
    }
    else
    {
        cout << " Element is not present" << endl;
    }
//Two more things
//Get the index of the element 
//lower_bound(s,e,key),upper_bound(s,e,key)

auto lt=lower_bound(arr,arr+n, 40);
if((lt-arr)==n)
{
    cout<<"Element is not present "<<endl;
} 
cout<<"lower bound of 40 is:"<<lt-arr<<endl;
auto ut=upper_bound(arr,arr+n,40);
cout<<"upper bound of 40 is:"<<ut-arr<<endl;

cout<<"frequency of 40 is :"<<ut-lt<<endl;
    return 0;
}
