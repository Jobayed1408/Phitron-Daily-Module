#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
      int s=1;
      if(n<=1) return s;
      for(int i=1;i<=n;i++)
      {
            s*=i;
      }
      return s;
}

int main()
{
      string s;
      cin>>s;
//      cout<<s.size()<<endl;
      int i=0;
      vector<int>freq(26 , 0);
      while(i<s.size())
      {
            freq[s[i] - 'a']++;
            i++;
      }

//      int r = (fact(3))/((fact(freq[0])*fact(freq[1])*fact(freq[2])));
      int m=1;
      int a=fact(s.size());
      for(int i=0;i<26;i++)
      {
//            cout<<a<<endl;
            if(freq[i]>0)
            m*=fact(freq[i]);
//            cout<<m<<endl;
      }
      cout<<a/m<<endl;

}
