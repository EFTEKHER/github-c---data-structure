#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#define ull unsigned long long int
#include <ctype.h>
using namespace std;
float square_root(int n, int p)
{
   int s = 0;
   int e = n - 1;
   float ans = -1;
   while (s <= e)
   {
      int mid = (s + e) >> 1;

      if (mid * mid == n)
      {
         return mid;
      }
      else if (mid * mid < n)
      {
         ans = mid;
         s = mid + 1;
      }
      else
      {
         e = mid - 1;
      }
   }
   // brute force for floating point
   float inch = .1;
   for (int i = 1; i <= p; i++)
   {
      while (ans * ans <= n)
      {
         ans = ans + inch;
      }
      ans = ans - inch;
      inch = inch / 10;
   }
   return ans;
}

int main()
{
   // square root using binary search
   int n,p;
   cin >> n;
   cin>>p;
   if(p>6)
   {
      p=6;
   }
   cout << square_root(n, p) << endl;

   return 0;
}
