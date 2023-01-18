#include<stdio.h>

void swap(int ar[],int *l, int *r)
{
    int temp;
    temp = ar[*l];
    ar[*l] = ar[*r];
    ar[*r] = temp;
}

int main()
{
    int m,n,l,r;
    scanf("%d",&m);
    int arr[m+1];
    for(int i=1;i<=m;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&l,&r);
        swap(arr,&l,&r);
    }
    //After all swap new array
    for(int i=1;i<=m;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
