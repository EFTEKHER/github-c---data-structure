#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    // int a[10]={1,2,3};
    // print all the first 10 number
    // for(int i=0;i<10;i++)
    // {
    //  cout<<a[i]<<" ";
    //}
    int a[10];
     cout<<sizeof(a)<<endl;
    cout<<sizeof(a)/sizeof(int)<<endl;
    cout<<" Enter Input "<<endl;

   
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
