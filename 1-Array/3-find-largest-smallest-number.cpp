#include<iostream>
 #include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<limits.h>
using namespace std;
      
        
int main()
{
 int a[1000];
    int n,key;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // algorithm find smallest and largest number of an array
int largest=INT_MIN;
int smallest=INT_MAX;

for(int i=0;i<n;i++)
{
    if(a[i]>largest)
    {
        largest=a[i];
        //largest=max(largest,a[i]);
    }
    if(a[i]<smallest)
    {
        smallest=a[i];
       // smallest=min(smallest,a[i]);
    }
}
cout<<"largest is :"<<largest<<endl;
cout<<"smallest is :"<<smallest<<endl;


return 0;
}
