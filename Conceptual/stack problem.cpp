#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char>st;

        int i=0;
        while(i!=s.size())
        {
            if(s[i] == 'Q') st.push(s[i]);
            if(s[i] == 'A' && !st.empty())
            {
                st.pop();
            }
            i++;
        }
        if(st.empty()) cout<<"Yes\n";
        else cout<<"No\n";
    }

}
