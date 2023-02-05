#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin>>s;
        stack<char>st;

        int i=0;
        while(i!=s.size())
        {
            if(st.empty()) st.push(s[i]);
            else if(s[i]=='(' ||s[i] == '{' || s[i]=='[' )
                st.push(s[i]);
            else if(s[i] == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if(s[i] == '}' && st.top() == '{')
            {
                st.pop();
            }
            else if(s[i] == ']' && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
            i++;
        }
        if(st.empty()) cout<<"Yes\n";
        else cout<<"No\n";
    }

}


// (([][]{()}))