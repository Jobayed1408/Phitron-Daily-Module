#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(void)
{
    int t;
    cin>>t;
    while(t!=0)
    {

        long long int n, m;
        long long int sum=0;
        cin>>n >> m;
        vector<long long int>ar(n);
        vector<long long int>arr(m);
        for(long long  int i=0; i<n; i++)
        {
              cin>>ar[i];
        }
        for(long long int i=0; i<m; i++)
        {
            cin>>arr[i];
        }

//        sort(ar.begin(),ar.end());
//        sort(arr.begin(), arr.end());
//        reverse(arr.begin(), arr.end());

        for(long long int i=0; i<m; i++)
        {

            if(i<arr.size())
            {
//                  cout<<"I = "<<i<<" \n";

                ar.push_back(arr[i]);
                ar.erase(ar.begin());
//                sort(ar.begin() , ar.end());
            }
        }
        sort(ar.begin(), ar.end(), greater<int>());
        for(ll i=0; i<n; i++)
        {
//              cout<<ar[i]<<" ";
              sum+=ar[i];
        }
        cout<<sum<<endl;
//        cout<<endl<<"Res = "<<sum<<"\n";
        t--;

    }
}

int  main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

}
