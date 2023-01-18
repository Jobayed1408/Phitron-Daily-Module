#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=1;
    for(int i=1;i<n;i+=2)
    {
        sum*=arr[i];
    }
    cout<<sum<<endl;
}
