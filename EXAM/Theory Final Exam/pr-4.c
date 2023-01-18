
#include<stdio.h>

void freq(char str[100], int len)
{
    int frequency_array[26];
    for(int i=1; i<=26; i++)
    {
        frequency_array[i]=0;
    }
    for(int i=0; i<len; i++)
    {
        frequency_array[(str[i]-'a')+1]++;
    }
    for(int i=1; i<=26; i++)
    {
        int count=0;
        if(frequency_array[i]>count)
        {
            count = frequency_array[i];
            while(count!=0)
            {
                char ch;
                ch=i+96;
                printf("%c",ch);
                count--;
            }
        }
    }
}
void solve(void)
{
    char str[100];
    int a;
    scanf("%s",str);
    int len = strlen(str);
    freq(str,len);
    printf("\n");
}
int main(void)
{
    solve();
}
