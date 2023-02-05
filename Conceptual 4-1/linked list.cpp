#include<bits/stdc++.h>
using namespace std;

void solve(void)
{
//      cout<<"Click\n";
    int t;
    cin>>t;
    while(t--)
    {
        list<int> l;
//      l.push_back(15);
//      l.push_back(12);
//      l.push_back(17);
//      l.push_front(20);
//      l.sort();
//      cout<<l.front();
//      for(auto i=l.begin();i!=l.end();i++)
//      {
//            cout<<*i<<" ";
//
//      }

        int n;
        cin>>n;
//      int arra[n+1][n+1];
        for(int i=1; i<=n*n; i++)
        {
            l.push_back(i);
        }

        int grid[n+1][n+1];

//      for(int i=1;i<=n;i++)
//      {
//            for(int j=1;j<=n;j++)
//            {
//                  cin>>arra[i][j];
//            }
//      }

        int a=n*n;
        int b = 1;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(i%2!=0 && j%2!=0)
                {
                    grid[i][j] = l.front();
                    l.pop_front();
//                        l.push_back(b);
//                        arra[i][j] = b;
//                        b++;
//                        l.push_back(abs(arra[i][j] - arra[i+1][j+1]));
                }
                if(i%2!=0 && j%2==0)
                {
                    grid[i][j] = l.back();
                    l.pop_back();
//                        l.push_back(a);
//                        arra[i][j] = a;
//                        a--;
//                        l.push_back(abs(arra[i][j] - arra[i+1][j+1]));
                }

            }
            for(int j=n; j>=1; j--)
            {
                if(i%2==0 && j%2!=0)
                {
                    grid[i][j] = l.back();
                    l.pop_back();

//                        l.push_back(a);
//                        arra[i][j] = a;
//                        a--;
//                        l.push_back(abs(arra[i][j] - arra[i+1][j+1]));
                }
                if(i%2==0 && j%2==0)
                {
                    grid[i][j] = l.front();
                    l.pop_front();
//                        l.push_back(b);
//                        arra[i][j] = b;
//                        b++;
//                        l.push_back(abs(arra[i][j] - arra[i+1][j+1]));
                }

            }

        }

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cout<<grid[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}

int  main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

}
