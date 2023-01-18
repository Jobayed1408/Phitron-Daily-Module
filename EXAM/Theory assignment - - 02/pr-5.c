#include <stdio.h>
#define add__three__nums(a,b,...) add_three_nums( a,  b, 0)

int add_three_nums (int a, int b, int c)
{
  return a + b + c;
}
main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n", add__three__nums(a,b));
}
