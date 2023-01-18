#include<stdio.h>
#include<string.h>

void twice(char str[], int l)
{
    int i=0;
    while(str[i]!='\0'){
        if((i+1)%2==0) printf("%c%c",str[i],str[i]);
        else printf("%c",str[i]);
        i++;
    }
}

int main()
{
    char sr[100];
    scanf("%s",sr);
    int l = strlen(sr);
    twice(sr,l);
}
