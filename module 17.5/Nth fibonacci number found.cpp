#include<bits/stdc++.h>
using namespace std;
//#define ll long long ;
//long long int memo[1000];
vector<long long int>memo(1000,-1);
long long int fib(int n)
{
      if(n<=0) return 0;
      if(n==1) return 1;

//      return fib(n-1)+fib(n-2);
      if(memo[n] != -1) return memo[n];
      else{
            memo[n] = fib(n-1)+fib(n-2);
      }
      return memo[n];
}

int main()
{
//      memset(memo, -1, sizeof(memo));
      int n;
      cin>>n;
      cout<<fib(n);
}