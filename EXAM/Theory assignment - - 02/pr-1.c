#include<stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    //gets(str);
    int i;
    for (i = 0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
        else{
            str[i]+=32;
        }
        //printf("%s",str[i]);

    }
    //printf("%s",str);
    puts(str);
}
