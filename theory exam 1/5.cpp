#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0;
    cin>>n;
    vector<int>d;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=i ; j<=n ; j = j+i )
        {
            d.push_back(i);
            k++;
        }
    }
    for(int i=1 ; i<=d.size() ; i++)
    {
//        for(int j=i ; j<=n ; j = j+i )
//        {
//            cout<<i<<" ";
//        }
        cout<<d[i]<< " ";//<<"\n";
    }
    cout<<k<<endl;

}
