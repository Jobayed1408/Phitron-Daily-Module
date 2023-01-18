#include<stdio.h>
int is_present(char s[],char n)
{
    int flag = 0,i=0;
    while(s[i]!='\0')
    {
        if(s[i]==n) flag=1;
        i++;
    }
    return flag;
}


int main()
{
    char s[2000];
    scanf("%s",s);
    if(is_present(s,'1') && is_present(s,'7') && is_present(s,'9'))
    {
        printf("Yes\n");
    }
    else
        printf("No\n");
}
