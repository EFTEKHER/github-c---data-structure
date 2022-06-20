#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// Binary search
// efficent way to search in sorted arrays
int binary_search(int A[],int n,int key)
{
int s=0;
int e=n-1;
while(s<=e)
{
  int mid=(s+e)/2;
  if(A[mid]==key)
  {
    return mid;
  }
  else if(A[mid]>key)
  {
    e=mid-1;
  }
  else
  {
    s=mid+1;
  }

}
return -1;
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
  // Ask the element we want to search;
  cout << "Enter your element " << endl;
  cin >> key;
  cout<<" printing array "<<endl;
for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<" Binary Search :"<<endl;

    cout<<binary_search(a,n,key)<<endl;
  return 0;
}
