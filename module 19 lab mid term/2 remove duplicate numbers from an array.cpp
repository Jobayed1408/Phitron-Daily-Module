#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    map<int, bool> m;
    for(int i=0; i<n ; i++)
    {
        m[ v[i] ] = true;
    }

    for(auto it : m)
    {
        cout<<it.first<< " ";
    }
}
