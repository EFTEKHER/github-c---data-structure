#include<bits/stdc++.h>

using namespace std;
bool compare(int a,int b)
{
  cout<<" compare "<<a<<"  "<<b<<endl;
   return a<b;
}
 void bubble_sort(int a[],int n,bool (&cmp)(int a,int b))
 {
    //N-1 large elements  to the end;
    for(int i=1;i<=n-1;i++)
    {
        //pairwise swaping
        for(int j=0;j<=n-i-1;j++)
        {
            if(cmp(a[j],a[j+1]))
            {
                swap(a[j],a[j+1]);
            }
        }
    }

 }     
        
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
cout<<"bubble sort "<<endl;
   bubble_sort(a,n,compare);
  for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;   
return 0;
}
