#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
int maximum_bitonic_length(int arr[], int n)
{
    int in[1000];
    int dec[1000];
    int inx = 1, decx = 1;
    in[0] = 1;
    dec[n - 1] = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] <= arr[i])
        {
            inx += 1;
            in[i] = inx;
        }
        else
        {
            inx = 1;
            in[i] = inx;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << in[i] << ",";
    }
    cout << endl;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i + 1] <= arr[i])
        {
            decx += 1;
            dec[i] = decx;
        }
        else
        {
            decx = 1;
            dec[i] = decx;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dec[i] << ",";
    }
    cout << endl;
int mAx=in[0]+dec[0]-1;
for(int i=1;i<n;i++)
{
    int b=in[i]+dec[i]-1;
    if(b>mAx)
    {
mAx=b;
    }
}
cout<<"MAX LENGTH IS "<<mAx<<endl;

}

int main()
{
    int arr[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    maximum_bitonic_length(arr, n);
    return 0;
}
