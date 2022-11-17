/*
code written by Eftekher Ali Efte from Bangladesh
 email:eftekherali2000@gmail.com
pursuing computer science and engingeering in Ruet
*/
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#define ull unsigned long long int
#include <ctype.h>
using namespace std;

bool isOdd(int n)
{
    return n & 1;
}
int getbit(int n, int i)
{
    int mask = (1 << i);
    int temp = n;
    int bit = (temp & mask) > 0 ? 1 : 0;
    return bit;
}
int setbit(int n, int i)
{
    int mask = (1 << i);
    int temp = n;
    int ans = mask | temp;
    return ans;
}
void clearBit(int &n, int i)
{
    int mask = ~(1 << i);
    n = n & mask;
}
void updateBit(int &n,int i,int v)
{
    int  mask=~(1<<i);
    int cleared_n=mask&n;
    n=cleared_n|(v<<i);


}
int  clearLastBits(int &n,int i)
{
    int mask=~(-1<<i);
    return n&mask;
}
int clearRangeItoJ(int &n,int i,int j)
{
    int a=(~0)<<(j+1);
    int b=(1<<i)-1;
    int result =a|b;
    return n&result;
}
//a ------------> (~0)<<j+1 -a
//--------------> b=2^i-1  === (1<<i)-1
int main()
{
    int n;
    // cout << "Enter Number :" << endl;
    n = 15;
    // if (isOdd(n))
    // {
    //     cout << " Number is odd " << endl;
    // }
    // else
    // {
    //     cout << " Number is even " << endl;
    // }
    // cout << "Enter bit number :" << endl;
    // int i;
    // cin >> i;
    //     cout << " " << i << " th bit is:" << getbit(n, i) << endl;
    // cout<<"setBit is: "<<setbit(n,i)<<endl;
   // clearBit(n,i);
    //cout<<n<<endl;
    //update the 4 bit in 5
    // updateBit(n,2,0);
    // cout<<n<<endl;
    // updateBit(n,3,1);
    // cout<<n<<endl;
    int i;
    cin>>i;
cout<<clearLastBits(n,i)<<endl;
int x=31;
cout<<clearRangeItoJ(x,1,3)<<endl;

    return 0;
}
