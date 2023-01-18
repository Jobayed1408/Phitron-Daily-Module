#include<stdio.h>
int gcd(int a, int b)
{
    int l,r,i;
    if(a>b)
    {
        l=a;
        r=b;
    }
    else
    {
        l=b;
        r=a;
    }
    for(i=l;i>=1;i--)
    {

        if(l%i==0 && r%i==0)
            {
                return i;
            }
    }
    return ;
}
void solve()
{
    int n,cnt=0;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if((gcd(arr[i],arr[j]))==1)
                {
                    cnt++;
                }
            }

        }
    }
    printf("%d\n",cnt);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
}
