#include<iostream>
 #include<stdio.h>
#include<stdlib.h>
using namespace std;
  //selection_sort

  void selection_sort(int a[],int n)
  {
   for(int i=0;i<n-1;i++)
   {
    int min_index=i;
     //find the smallest element index in the unsorted part
     for(int j=i;j<=n-1;j++)
     {
        if(a[j]<a[min_index])
        {
            min_index=j;
        }
     }
     //after this loop we can swap finally
    swap(a[min_index],a[i]); 

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


    cout<<"selection sort " <<endl;
    selection_sort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;    

return 0;
}
