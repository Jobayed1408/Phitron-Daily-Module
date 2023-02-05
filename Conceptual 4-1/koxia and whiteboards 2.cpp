#include<bits/stdc++.h>
using namespace std;

void solve(void)
{
//      cout<<"Click\n";
    int t;
    cin>>t;
    while(t!=0)
    {

        long long int n, m;
        long long int sum=0;
        cin>>n >> m;
//        vector<long long int>ar(n);
//        vector<long long int>arr(m);
//        list<int>l;
      list<int>l;
        for(long long  int i=0; i<n; i++)
        {
              int in;
            cin>>in;
            l.push_back(in);
            sum+=in;
        }
        for(long long int i=0; i<m; i++)
        {
              int in;
              cin>>in;
              sum+=in;
              sum-=l.front();
              l.pop_front();
              l.push_back(in);

//            cin>>arr[i];
//            sum+=arr[i];
        }

//        sort(ar .begin(), ar.end() );
//        sort(arr.begin(), arr.end(), greater< int>());
//
//        for(long long int i=0;i<n;i++)
//        {
//
//              if(i<=arr.size()-1)
//              {
//                    sum+=arr[i];
//              }
//              else
//                  sum+=ar[i];
//        }
        cout<<sum<<"\n";

      t--;
    }
}

int  main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

}
