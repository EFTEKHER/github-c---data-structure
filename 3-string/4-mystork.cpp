#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#include <cstring>
using namespace std;
char *mystork(char *str, char delim)
{
    //string and single char act as a delima
    static char *input=NULL;
    if(str!=NULL)
    {
        input=str;
    }
    //check input base;
    if(input==NULL)
    {
        return NULL;
    }
    //start extracting the tokens and store them in array 

    char *output= new char[strlen(input)+1];
    int i=0;
    for(;input[i]!='\0';i++)
    {
        if(input[i]!=delim)
        {
            output[i]=input[i];
        }
        else
        {
            output[i]='\0';
            input=input+i+1;
            return output;
        }
    }
    //corner case 
    output[i]='\0';
    input=NULL;
    return output;
}   
        
int main()
{
    string s="Today is a rainy day "; 

    char *ptr=mystork((char*)s.c_str()," ");
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
