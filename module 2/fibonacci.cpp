#include<bits/stdc++.h>
using namespace std;
int call=0;
long long int save[10000];
long long int fib(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    if(save[n]!=0) return save[n];
    call+=2;
    long long int x = fib(n-1)+fib(n-2);
    save[n]=x;
    return x;
}

int main()
{
    int n;
    cin>>n;
    long long int x = fib(n);
    cout<<x<<endl;
    cout<<call<<endl;
}



