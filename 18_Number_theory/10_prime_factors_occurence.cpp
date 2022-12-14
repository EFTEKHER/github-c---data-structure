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
      
        
int main()
{
    
        int n,k;
        cin>>n>>k;
vector<pair<int,int>> p1;
vector<pair<int,int>> p2;
pair<int,int>c;
//n= p1^c1----->pn^cn   // c=floor n/ pow(n,i)

        int ans=INT_MAX;
        //Factorization of k
        //p1,p2,p3,----pn
        int occ=0;
        for(int i=2;i*i<=k;i++)
        {
            if(k%i==0)
            {
                occ=0;
               c.first=i;
                while(k%i==0)
                {
                    occ++;
                    k=k/i;
                }
                c.second=occ;
               p1.push_back(c); 

            }

        }

 for(auto x:p1)
 {
    cout<<x.first<<" "<<x.second<<endl;
 }    

       


   
        
return 0;
}
