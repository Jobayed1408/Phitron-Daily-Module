#include<stdio.h>

void swap(int n, int a, int b)
{
    for(int i=2;i<n;i++)
    {
        int c=a+b;
        a=b;
        b=c;
        printf(", %d",c);
    }
}

void solve()
{
    int a=0,b=1;
    int n;
    scanf("%d",&n);
    if(n==0) printf("");
    else if(n==1) printf("%d",a);
    else{
        printf("%d, %d",a,b);
        swap(n,a,b);
    }
}

int main()
{
    solve();
}
