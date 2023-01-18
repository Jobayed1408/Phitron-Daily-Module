#include<stdio.h>

void solve()
{
    int m;
    scanf("%d",&m);
    int c=1;
    while(m--)
    {
        int n,t=0,i;
        scanf("%d",&n);
        int arr[n+5];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        int k,index=-1;
        scanf("%d",&k);
        for(i=0;i<n;i++)
        {
            if(arr[i]==k)
            {
                index = i;
                break;
            }


        }

        if(index==-1) printf("Case %d: Not Found\n",c);
        else printf("Case %d: %d\n",c,index+1);

        c++;
    }
}
int main()
{
    solve();
}
