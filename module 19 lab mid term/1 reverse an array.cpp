#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int a=0,b=v.size()-1;
    while(a<b)
    {
        swap(v[a],v[b]);
        a++,b--;
    }
    
    for(auto it : v)
        cout<<it<<" ";
    cout<<endl;
}
