#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int n,m;
    scanf("%d%d",&n,&m);
    int sum=0;
    int len = strlen(s);
    for(int i=0;i<len;i++){
        if(s[i] == '+'){
            sum = sum+(n+m);
            //printf("%d\n",sum);
        }
        else {
            sum = sum+(m*n);
            //printf("%d\n",sum);
        }
    }
    printf("%d\n",sum);
}
