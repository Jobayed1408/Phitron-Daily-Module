
#include <stdio.h>

void swap(int* x,int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void refference(int x, int y)
{
    x = x + 10;
    y = y + 10;
}

void solve()
{
    int a=5, b=15;
    printf("a=%d b=%d\n",a,b);
    refference(a,b);
    printf("a=%d b=%d\n\n",a,b);

    int m = 8,n= 15;
    printf("m=%d n=%d\n",m,n);
    swap(&m,&n);
    printf("m=%d n=%d\n",m,n);
}

int main()
{
    solve();
}
