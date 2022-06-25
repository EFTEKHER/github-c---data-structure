#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a[1000];
  int n, key;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  
  cout<<" printing array "<<endl;
for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;    

    cout<<" printing subArray"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<j;k++)
            {
                    cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}