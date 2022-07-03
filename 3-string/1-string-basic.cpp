#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<cstring>
#include<stdlib.h>
using namespace std;
      
        
int main()
{
    //string initialize
    string s0;
    string s1("Hello");
    cout<<s1<<endl;
    string s2="Hello world ";
      cout<<s2<<endl;
    string s3(s2);
      cout<<s3<<endl;
    string s4=s3;
      cout<<s4<<endl;

      char a[]={'H','e','l','l','o','\0'};
      string s5(a);
      cout<<s5<<endl;
if(s0.empty())
{
cout<<" s0 is empty "<<endl;
}
//Append

s0.append("I love c++");
cout<<s0<<endl;
 s0+=" and python";
 cout<<s0<<endl;

 //Remove and erase from the string
cout<<s0.length()<<endl;
s0.clear();
cout<<s0.length()<<endl;

//compare two string
s0="mango";
s1="apple";
cout<<s0.compare(s1)<<endl; //Returns an integer  ==0 equal ,> 0 or <0

//overloaded operators 

if(s1>s0)
{
cout<<" Mango is lexi greater than apple"<<endl;
}
cout<<s0[0]<<endl;


//Find substrings 

string s="I want to have apple and juice ";
int index=s.find("apple");
cout<<index<<endl;

//remove a word from the string
string word="apple";
int len=word.length();
s.erase(index,len);
cout<<s<<endl;
//iterate  over all the characters of the string 
for(int i=0;i<s1.length();i++)
{
cout<<s1[i]<<"\t";
}
cout<<endl;

//iterators 

for(auto it=s.begin();it!=s.end();it++)
{
    cout<<(*it)<<"\t";
}
cout<<endl;
//for each loop
for(auto c: s1)
{
    cout<<c<<" ,";
}
cout<<endl;
return 0;
}
