#include<stdio.h>

int main()
{
    int n=3,m=3,i,j;
    int a[n][m];
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nTranspose matrix:\n\n");
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

}
