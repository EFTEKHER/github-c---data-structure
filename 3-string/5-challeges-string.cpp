#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
string extractstringAtkey(string str,int key )
{
    //strtok
    char *s=strtok((char*)str.c_str()," ");
    while(key>1)
    {
        s=strtok(NULL," ");
        key--;
    }
    return (string)s; 


}     
int convertToInt(string s)
{
    int p=1;
    int ans=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        ans+=((s[i]-'0')*p); 
        p=p*10;
    }
    return ans;
}

   bool numericCompare(pair<string,string>s1, pair<string,string>s2)
   {
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return convertToInt(key1)<convertToInt(key2);
   }  
    bool lexiCompare(pair<string,string>s1, pair<string,string>s2)
   {
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return key1<key2;
   }       
int main()
{
// string s("10 20 30 40 50");
// int key;
// cin>>key;
// cout<<extractstringAtkey(s,key)<<endl;


    int n;
    cin>>n;
    cin.get();
    string a[100];
    for(int i=0;i<n;i++)
    {
        getline(cin,a[i]);
    }

   int key;
   string reversal, odering; 
   cin>>key>>reversal>>odering;

   pair<string,string>strpair[100]; 

   for(int i=0;i<n;i++)
   {
    strpair[i].first=a[i], 
    strpair[i].second=extractstringAtkey(a[i],key);

   }
//next sorting
if(odering=="numeric")
{
    sort(strpair,strpair+n,numericCompare);
}
else
{
    sort(strpair,strpair+n,lexiCompare);
}
//reversal
if(reversal=="true")
{
for(int i=0;i<n/2;i++)
{
    swap(strpair[i], strpair[n-i-1]);
}
}
  //print
   for(int i=0;i<n;i++)
{
   cout<<strpair[i].first<<endl;
}     
return 0;
}
