
#include<bits/stdc++.h>
using namespace std;

bool check_plaindrome(string s, int l, int r)
{
    if( r <= l ) return true;

    if( s[l] != s[r] )
    {
        return false;
    }
    return check_plaindrome(s, l+1, r-1 );
    return true;
}

int main()
{
    string s;
    cin>>s;
    if(check_plaindrome(s, 0, s.size()-1) ) cout<<"Yes\n";
    else cout<<"No\n";
}
