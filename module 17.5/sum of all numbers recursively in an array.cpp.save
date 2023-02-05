#include<bits/stdc++.h>
using namespace std;

int Sum(int a[] , int n)
{
//      int sum=0;
      if(n==0) return a[0] ;


//      return sum+=Sum(a[n-1], n);
//      sum+=a[n];
      return a[0]+Sum(a+1 , n-1);
}

int main()
{
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
            cin>>arr[i];
      cout<<Sum(arr,n-1);
}