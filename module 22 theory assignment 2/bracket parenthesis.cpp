#include<bits/stdc++.h>
using namespace std;

int main()
{
//    int t;
//    cin>>t;
//    while(t--)
//    {

        string s;
        cin>>s;
        stack<char>st;
        stack<char>t;
        
        int i=0;
        while(i!=s.size())
        {
            cout<<"\nStep : "<<i+1<<'\n';
            cout<<"For "<<i<<"th number bracket '"<<s[i]<<"' "<<'\n';
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
            t=st;
            cout<<"Stack: ";
            while(!t.empty())
            {
                cout<<t.top()<<" ";
                t.pop();
            }
            cout<<'\n';
        }
//        if(st.empty()) cout<<"Yes\n";
//        else cout<<"No\n";
//    }

}


// (([][]{()}))