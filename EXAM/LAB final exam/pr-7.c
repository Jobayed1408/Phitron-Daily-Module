
#include<stdio.h>

void freq(char str[], int len)
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
    int cont=0;
    for(int i=1; i<=26; i++)
    {
        if(frequency_array[i]==1) cont++;
    }
    printf("%d\n",cont);
}
void solve(void)
{
    int n;
    scanf("%d",&n);
    char str[n];
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
