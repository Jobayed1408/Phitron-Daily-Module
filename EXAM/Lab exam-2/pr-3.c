#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1) printf("1\n");
    else
    {
        for(int i=1; i<=n; i++)
        {
            printf("%d",i);
        }
        printf("\n");
        for(int i=2; i<n; i++)
        {
            for(int j=2; j<=n; j++)
            {
                if(j==2) printf("%d",i);
                if(i!=j && i!=n) printf(" ");
                if(j==n) printf("%d",n);
            }
            printf("\n");
        }
        for(int i=1; i<=n; i++)
        {
            printf("%d",n);
        }

    }

}
