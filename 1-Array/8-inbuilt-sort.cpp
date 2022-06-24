#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<algorithm>
using namespace std;

int main()
{
   
    int n, key;
    cin >> n;
    int a[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sort() an array using sort function'
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
