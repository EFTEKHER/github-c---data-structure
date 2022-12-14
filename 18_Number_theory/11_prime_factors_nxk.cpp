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
               
                while(k%i==0)
                {
                    occ++;
                    k=k/i;
                }
                //find out powers of 'i'  in n! side by side
                int cnt=0;
                int p=i;
                while(p<=n)
                {
                    cnt+=n/p;
                    p=p*i;
                }
                ans=min(ans, cnt/occ);

            }
          //we may have a case still a prime factor is left
          if(k>1)
          {
            int cnt=0;
                int p=k;
                while(p<=n)
                {
                    cnt+=n/p;
                    p=p*k;
                }
                ans=min(ans, cnt);

          }
cout<<ans<<endl;

        }

   

       


   
        
return 0;
}
