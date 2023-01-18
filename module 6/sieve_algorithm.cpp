#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> primes;
    vector<bool>visited(n+1);
    //Time complexity  = o(n^2)
    //O(n * n/2+n/3+...+3+2+1)
    //O(nlogn)
    //Space complexity = o(n )
    int k=0;
    for(int i=2; i<=n; i++)
    {
        if(visited[i]==false)
        {
            primes.push_back(i);
            //cout<<i<<endl;
            k++;
            for(int j=2; i*j<=n; j++)
            {
                visited[i*j]=true;
            }
        }
    }
    cout<<k<<endl;
    for(int i=0; i<primes.size(); i++)
    {

        cout<<primes[i]<<" ";
    }
    cout<< "\n";
}
