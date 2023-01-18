#include<stdio.h>

char grade(int n)
{
    if(n<=100 && n>=80) return 'A';
    else if(n<=79 && n>=60) return 'B';
    else if(n>=40 && n<=59) return 'C';
    else if(n>=0 && n<=39) return 'F';

}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%c",grade(n));
}

