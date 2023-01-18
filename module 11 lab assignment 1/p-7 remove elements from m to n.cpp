
#include<bits/stdc++.h>
using namespace std;

vector<int> remove_array(vector<int>a)
{
    int l,r;
    cin>>l>>r;
    int n= r-l+1;
    while(n--)
    {
        a.erase(a.begin()+(l-1));
    }

    return a;

}

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<int> ans = remove_array(a);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }


}
