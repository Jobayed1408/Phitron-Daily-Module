#include<bits/stdc++.h>
using namespace std;

int main()
{
      int a,b;
      string s , s2;
      cin>>a>>b>>s;
      s2=s;
      int k=a-1;
      for(int i=b-1;i>=((a+b)/2);i--)
      {
            swap(s[i],s[k]);
            k++;
      }
      cout<<s<<endl;
}
