#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

int main()
{
string s;
cin>>s;
 int f=s[0]-'0';
    if(f==9)
    {
        s[0]='9';
    }
    else 
    {
     if(f>4)
     {
        s[0]=((9-f)+'0');   
     }
    }
for(int i=1;i<s.length();i++)
{
    int f=s[i]-'0';
    if(f<5 || f==0)
    {
        continue;
    }
    else 
    {
     s[i]=((9-f)+'0');   
    }
}
cout<<s<<endl;
    return 0;
}
