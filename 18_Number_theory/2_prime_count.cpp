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
      
  void prime_sieve(int *p)
{
    // first mark all odd numbers as prime;
    for (int i = 3; i <= 1000; i += 2)
    {
        p[i] = 1;
    }
    // sieve
    for (int i = 3; i <= 1000; i += 2)
    {
        if (p[i] == 1)
        {
            for (int j = i * i; j <= 1000; j = j + i)
            {
                p[j] = 0;
            }
        }
    }
    p[2] = 1;
    p[0] = p[1] = 0;
} 

int count(int a,int b,int p[])
{
    int count =0;
    for(int i=a;i<=b;i++)
    {
        if(p[i]==1)
        {
            count++;
        }

    }
    return count;
}
int main()
{
   
    int p[1005] = {0};
    prime_sieve(p);
int a,b;
cout<<"Enter A: "<<endl;
cin>>a;
cout<<"Enter B: "<<endl; 
cin>>b;
 for (int i = a; i <= b; i++)
    {
        if (p[i] == 1)
        {
            cout << i << " ";
        }
    }
    cout<<endl;
cout<<"The number of primes in this range is :"<<count(a,b,p)<<endl;

        
return 0;
}
