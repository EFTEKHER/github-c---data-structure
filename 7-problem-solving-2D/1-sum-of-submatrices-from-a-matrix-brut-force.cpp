#include<iostream>
 #include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
  //Brut force
 int sum_of_submatrices(int a[][10],int n)
 {
    int sum=0;
    for(int li=0;li<n;li++)
    {
        for(int lj=0;lj<n;lj++)
        {
            //for top-left 
            for(int bi=li+1;bi<n;bi++)
            {
                for(int bj=lj+1;bj<n;bj++)
                {
                    //for bottom-right
                    for(int i=li;i<bi;i++)
                    {
                        for(int j=lj;j<bj;j++)
                        {
                            //sum;
                            sum+=a[i][j];
                            cout<<sum<<" ";
                        }
                    }

                }
            }
        }
    }
    return sum;
 }     
        
int main()
{
   int a[10][10];
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        a[i][j]=1;
    }
   }   
   cout<<sum_of_submatrices(a,n)<<endl;  
return 0;
}
