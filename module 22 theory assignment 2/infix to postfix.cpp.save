#include<bits/stdc++.h>
using namespace std;

bool prec(char ch)
{
    if(ch == '+' || ch == '-') return 0;
    else return 1;
}

int main()
{
    string s;
    cin>>s;
    stack<char>st;
    stack<char>tm;
    string ans = "";
    int c=0;

    for(int i=0; i<s.size(); i++)
    {
        char now = s[i];
        cout<<"\nStep: "<<i+1<<'\n';
        cout<<"For "<<i<<"th number character '"<<now<<"' => situation of the stack\n";
        if(now >= 'a' and now <= 'z')
        {
            ans += now;
        }

        else
        {
            while(st.size() and prec(st.top()) >= prec(now) )
            {
                ans +=st.top();
                st.pop();
            }
            st.push(now);
            tm = st;
        }
        cout<<"Current string : "<<ans<<endl;
        cout<<"Current stack: ";
        while(tm.size())
        {
            cout<<tm.top()<< " ";
            tm.pop();
        }
        c=i;
    }
    c++;
    tm = st;
    while(st.size() )
    {
        cout<<"Current stack: ";
        while(tm.size())
        {
            cout<<tm.top()<< " ";
            cout<<"\nStep: "<<c+1<<'\n';
            ans += st.top();
            cout<<"\nCurrent string : "<<ans<<endl;
            st.pop();
            c++;
            tm.pop();

        }

    }
    cout<<ans;
}

/*
a+b*c+d*e
*/
