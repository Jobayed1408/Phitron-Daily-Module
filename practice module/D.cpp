#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n;
    cin>>n;
    long long int arr[n];
    long long int k=0;
    long long int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //long long int t=(n*(n+1))/2;
    //int c=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            k=(arr[i-1]-arr[i]);
            c+=k;
            arr[i]+=k;
        }
    }
    cout<<c<<endl;
}


