#include<stdio.h>

int prime(int n)
{
    int r=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) r=1;
        if(n%i==0) r=1;
    }
    return r;
}
void solve()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        for(int i=l;i<=r;i++)
        {

            if(prime(i)==0) printf("%d ",i);
        }
        printf("\n");
    }
}
int main()
{
    solve();
}
