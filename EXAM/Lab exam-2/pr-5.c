#include<stdio.h>
int main()
{
    char s[101];
    int n;
    scanf("%d ",&n);
    s[n+1];
    //scanf("%s",s);
    for(int i=0; i<n; i++)
    {
        scanf("%c",&s[i]);
    }

    int max = 0;
    int index=1,count=1;
    for(int i=1; i<n; i++)
    {

        if((s[i-1] == '+') && (s[i]=='+'))
        {
            index++;
            //printf("index = %d\n",index);
        }

        if(index>max)
        {
            max = index;
            //index=1;
        }
        if(s[i-1]!=s[i]){
            index=1;
        }
        //else {
        //if(index>max) max = index;
        //    count++;
        //}
        if((s[i-1]=='-') && (s[i]=='-'))
        {
            count++;

            //printf("count = %d\n",count);
        }
        if(count>max) {
            max = count;
            //count=1;
        }
        if(s[i-1]!=s[i]){
            count=1;
        }


    }
    printf("%d\n",max);
}
