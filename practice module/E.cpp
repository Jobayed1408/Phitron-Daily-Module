#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n;
    cin>>n;
    long long int arr[n];
    long long int t=(n*(n+1))/2;
    long long int c=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        c+=arr[i];

    }cout<<t-c<<endl;
}


