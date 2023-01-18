#include<stdio.h>
void sorted(int ar[],int n)
{
    for(int i=1; i<=n; i++)
    {
        int max=ar[1];
        for(int j=1; j<=n; j++)
        {
            if(ar[j]>=ar[i]){
                int tem=ar[i];
                ar[i]=ar[j];
                ar[j]=tem;
            }
        }
    }
}
float for_median(int ar[],int n)
{
    float median=0;
    if(n%2==0){
        median = 1.0*(ar[n/2]+ar[n/2 + 1])/2;
    }
    else{
        median = ar[n/2 + 1];
    }
    return median;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&ar[i]);
    }
    sorted(ar,n);
    printf("\nMedian : %.1f",for_median(ar,n));
}
