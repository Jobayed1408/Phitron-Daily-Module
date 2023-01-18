#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin>>n;
    //cout<<n<<" ";
    while(n!=1)
    {
        cout<<n<<" ";

        if(n%2==0) n/=2;
        else n=(n*3+1);

    }
    cout<<1<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
