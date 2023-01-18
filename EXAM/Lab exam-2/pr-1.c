#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    int m = n/3;
    if(n%3==0) printf("%d\n",m);
    else printf("-1\n");


}
