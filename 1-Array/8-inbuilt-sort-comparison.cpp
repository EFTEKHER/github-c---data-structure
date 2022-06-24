#include<iostream>
 #include<stdio.h>
#include<stdlib.h>
#include<algorithm>
//define comparator
using namespace std;
bool compare(int a,int b)
{
    cout<<" comparing "<<a<<" "<<b<<endl;
    return a>b;
}

      
        
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
    sort(a,a+n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
        
return 0;
}
