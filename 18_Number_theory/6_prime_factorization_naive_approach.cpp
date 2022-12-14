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
#define N =1000;

vector <int> primeSieve(int *p,int n)
{
vector<int>primes;
p[0]=p[1]=0;
p[2]=1;
for(long long i=3;i<=n; i+=2)
{
    p[i]=1;
}
for(long long j=2;j<=n;j++)
{
    if(p[j]==1)
    {
        primes.push_back(j);

        for(long long k=j*j;k<=n;k+=j)
        {
            p[k]=0;
        }
    

    }
}
// for(auto x:primes)
// {
//     cout<<x<<" ";
// }
return primes;


}
//NaiveApproachprimefactor()
void primefactors(vector<int>primes, int c)
{
    vector<int>primefactors;
for(auto x:primes)
{
    if(c%x==0)
    {
        while(c%x==0)
        {
            c=c/x;
        }
        primefactors.push_back(x);
    }
}


for(auto x:primefactors)
{
    cout<<x<<" ";
}
}
        
int main()
{
int n;
n=1000;
int *p=new int [n];
for(int i=0;i<=n;i++)
{
    p[i]=0;
}

int c;
cin>>c;
vector<int> primes=primeSieve(p,c);
primefactors(primes,c);


        
return 0;
}
