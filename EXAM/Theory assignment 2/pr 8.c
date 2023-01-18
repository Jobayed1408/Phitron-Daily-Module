#include<stdio.h>
int main()
{
    char s[100];
    fgets(s, sizeof(s), stdin);
    int len  = strlen(s)-1;
    for(int i=0;i<len;i++){
        printf("%d ",s[i]);
    }
}

