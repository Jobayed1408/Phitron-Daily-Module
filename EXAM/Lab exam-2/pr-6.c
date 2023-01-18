#include<stdio.h>
int main()
{
    char arr[1001];
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        arr[n];
        scanf("%s",arr);
        /*
        for(int i=0; i<n; i++)
        {
            printf("%c",arr[i]);
        }*/
        int count=0;
        for(int i=1; i<n; i++)
        {
            //printf("\ni = %d\n",i);
            if(arr[i-1]=='1' && arr[i] == '0')
            {
                //printf("%c  %c\n",arr[i-1],arr[i]);
                count++;
                //printf("count = %d\n",count);
            }

            else if(arr[i-1]=='0' && arr[i] == '1')
            {
                //printf("%c  %c\n",arr[i-1],arr[i]);
                count++;
                //printf(" count = %d\n",count);
            }
        }
        printf("%d\n",count);

    }

}
