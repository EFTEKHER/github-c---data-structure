/*
code written by Eftekher Ali Efte from Bangladesh 
 email:eftekherali2000@gmail.com
pursuing computer science and engingeering in Ruet 
*/
#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#define ull unsigned long long int
#include<ctype.h> 
using namespace std;
void filterCharaters(char arr[],int n)
{
    int j=0;
    while(n>0)
    {
        if(n&1==1)
        {
           
            cout<<arr[j];
        }
        j++;//skip if 0
        n=n>>1;
    }
    cout<<endl;
}
void printSubsets(char arr[])
{
int n=strlen(arr);
for(int i=0;i<(1<<n);i++)
{
filterCharaters(arr,i);
}
return ;

}      
        
int main()
{
  char a[100];
  cin>>a;
  printSubsets(a);
        
return 0;
}
