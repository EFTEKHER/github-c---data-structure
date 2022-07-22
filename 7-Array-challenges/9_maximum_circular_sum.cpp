#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
int kadanemaxsum(int arr[], int n)
{
    int currentsum = 0;
    int maximumsum = 0;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        if (currentsum < 0)
        {
            currentsum = 0;
        }
        maximumsum = max(maximumsum, currentsum);
    }
    return maximumsum;
}
// int maximumcircularsum(int arr[],int n)
// {

// }
int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ,  ";
    // }
    int b[100];

    int sum = 0;
    int x = kadanemaxsum(arr, n);
    // cout << x << endl;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    //  cout << sum << endl;
    for (int i = 0; i < n; i++)
    {
        b[i] = (-1 * arr[i]);
    }
    int y = kadanemaxsum(b, n);
    int z = sum - (-y);
    int mAx = max(x, z);
    cout << mAx << endl;

    return 0;
}
