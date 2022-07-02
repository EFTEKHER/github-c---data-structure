#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
      
 //cin.get() //reads a single character at a time
 //put a loop to read characters till you get a new line 
 void readline(char a[],int maxLen ,char delim='\n' )
 {
    int i=0;
    char ch=cin.get();
    while(ch!=delim)
    {
        a[i]=ch; 
        i++;
        if(i==(maxLen-1))
        {
            break;
        }
        ch=cin.get();
    }
    //once out of the loop
    a[i]='\0';
    return;

 }       
int main()
{
    char a[1000];
    //readline(a,1000,'$');
    cin.getline(a,1000,'$');
    cout<<a<<endl;
        
return 0;
}
