#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int maxx;
    maxx = (a>b)? a : b;
    printf("%d",maxx);
}
