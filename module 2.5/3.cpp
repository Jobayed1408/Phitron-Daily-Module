#include<bits/stdc++.h>
using namespace std;
//int k = 1000000;
//vector<int >ar1(k, 0);
int main()
{
    int n,i=0;
    cin>>n;
    vector<int >ar1(n+1, 0);
    int a=1;
    int ans=1;

    if(n==1)
    {
          ar1[1]=1;
            ans=1;
    }

    else if(n%2==0)
    {
        for(int i=n-1; i>=1; i-=2)
        {
            ar1[a] = i;
            int r = abs(ar1[a]-ar1[a-1]);
            if(r==1)
            {
                ans=0;
                break;
            }
            a++;
        }

        for(int i=n; i>=1; i-=2)
        {
            ar1[a] = i;
            int r = abs(ar1[a]-ar1[a-1]);
            if(r==1)
            {
                ans=0;
                break;
            }
            a++;
        }

    }

    else
    {
        for(int i=n; i>=1; i-=2)
        {
            ar1[a] = i;
            int r = abs(ar1[a]-ar1[a-1]);
            if(r==1)
            {
                ans=0;
                break;
            }
            a++;
        }

        for(int i=n-1; i>=1; i-=2)
        {
            ar1[a] = i;
            int r = abs(ar1[a]-ar1[a-1]);
            if(r==1)
            {
                ans=0;
                break;
            }
            a++;
        }
    }
    if(ans==0)
    {
        cout<<"NO SOLUTION\n";
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            cout<<ar1[i]<<" ";

        }
        cout<<"\n";
    }
}
