#include<iostream>
 #include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
      
        
int main()
{
int left=-1,right=-1;
    int a[1000],n;
int cumSum[100]={0};
    cin>>n;
cin>>a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        //building cummalative sum
        cumSum[i]=cumSum[i-1]+a[i];
    }   

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<j;k++)
            {
                cout<<a[k]<<",";
            }
            cout<<endl;
        }
    }  

    cout<<"maximum sub Array sum"<<endl;

int maxsum=0;
int currentsum=0;

 for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            currentsum=0;
            //getting current sum of a sub Array
           currentsum=cumSum[j]-cumSum[i-1];
            //to get maxsum
            if(currentsum>maxsum)
            {
                maxsum=currentsum;
                left=i;
                right=j;
            }
            
        }
    }  
    cout<<" maximum sub array is "<<maxsum<<endl;

    for(int i=left;i<=right;i++)
    {
        cout<<a[i]<<"  ";
    }
return 0;
}
