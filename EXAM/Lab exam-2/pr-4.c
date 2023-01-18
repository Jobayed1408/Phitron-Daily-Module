#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[101][101];
    for(int i=1 ;i<=m;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=1 ;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(arr[i][j]==i && arr[i][j] == j){
                arr[i][j] = arr[i][j]+3;
            }
            else if(arr[i][j]==i && arr[i][j] != j){
                arr[i][j] = arr[i][j]+2;
            }
            else if(arr[i][j]==j && arr[i][j] != i){
                arr[i][j] = arr[i][j]+1;
            }
            else{
                arr[i][j] = arr[i][j];
            }
        }
    }
    for(int i=1 ;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}
