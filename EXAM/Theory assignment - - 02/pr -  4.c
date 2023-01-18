#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int ar[n];
    int arr[n];

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&ar[i]);
    }

    int j=1;
    for(int i=1; i<=n; i++)
    {
        if(ar[i]%2==0){
            arr[j]=ar[i];
            j++;
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(ar[i]%2!=0) {
            arr[j]=ar[i];
            j++;
        }
    }
    for(int i=1; i<=n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("The %dth element in this sequence is %d. ",k, arr[k]);

}
