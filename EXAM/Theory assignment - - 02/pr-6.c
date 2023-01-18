#include<stdio.h>
int fact(int n)
{
    int k = 1;
    for(int i=1; i<=n; i++)
    {
        k*=i;
    }
    return k;
}
float ratio_func(int m,int n)
{
    return 1.0*fact(m)/fact(n);
}
int main()
{
    int b,c;
    scanf("%d%d",&b,&c);

    printf("%.2f\n",ratio_func(b,c));
}
