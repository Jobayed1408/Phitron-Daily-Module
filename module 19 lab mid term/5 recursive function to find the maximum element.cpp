#include<bits/stdc++.h>
using namespace std;

int Maximum(int a[] , int n)
{
	int m = a[0];
	if(n==1) return m;
	
	return max( a[n-1] , Maximum(a, n-1) );
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxi = Maximum(arr , n);
	cout<<maxi<<" \n";
}
