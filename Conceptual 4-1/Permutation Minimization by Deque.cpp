#include<bits/stdc++.h>
using namespace std;

void solve(void)
{
//      cout<<"Click\n";
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int ar[n];
        list<int>l;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }

        l.push_back(ar[0]);
        for(int i=1; i<n; i++)
        {
            if(ar[i]>l.front())
                l.push_back(ar[i]);
            else
                  l.push_front(ar[i]);
        }
        for(auto i=l.begin();i!=l.end();i++)
        {
              cout<<*i<<" ";
        }
        cout<<"\n";
    }
}

int  main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

}
