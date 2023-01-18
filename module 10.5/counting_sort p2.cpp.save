
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    vector<int>freq(n, 0);

    for(int i=0; i<n; i++)
    {
        freq[a[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        cout<<freq[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        //cout<<"Fre "<<freq[i]<<endl;
        if(freq[i]>0)
        {

            while(freq[i]--)
            {
                cout<<"Frequency : "<<freq[i]<<" " <<i<< " ";
            }
        }
    }
}

int main()
{
    solve();
}
