#include<stdio.h>

int  Consecutive(int a){
    int n;
    while(a--)
    {
        scanf("%d",&n);
        int m = n/4;
        printf("%d %d %d %d\n",m-3,m-1,m+1,m+3);
    }

}

int main()
{
    int t;
    scanf("%d",&t);
    Consecutive(t);
}
