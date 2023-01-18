#include<stdio.h>
int main()
{
    char s[100];
    int n;
    scanf("%s",s);
    scanf("%d",&n);
    int i=0;
    while(s[i]!='\0')
    {
        int k = s[i];
        k+=n;
        if(k>122){
            k=96+(k-122);
        }
        printf("%c",k);
        i++;
    }
}
