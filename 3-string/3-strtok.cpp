#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

/*
char *strtok(char *s, char *delimeters)
//returns a token on each subsequent call
on first call function should be passed with string argument for 's'
on subsequent calls we should pass the string argument as null
*/
        
int main()
{
    char s[100]="Today is a rainy day "; 

    char *ptr=strtok(s," ");
    cout<<ptr<<endl;

    // ptr=strtok(NULL," ");
    //     cout<<ptr<<endl;

    while(ptr!=NULL)
    {
        ptr=strtok(NULL," ");
        cout<<ptr<<endl;
    }
return 0;
}
