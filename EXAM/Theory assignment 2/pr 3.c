#include<stdio.h>
int main()
{
    int n =15;
    int arr[n];
    arr[0] = 1;
    printf("%d ",arr[0]);
    int k=1;
    for( int i=1;i<n;i++){
        k = k*2;
        arr[i] = k;
        printf("%d ",arr[i]);
    }
}
