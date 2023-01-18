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

float even_for_median(int ar[],int n)
{
    //int even_array[n];
    /*
    int j=0;
    for(int i=1;i<=n;i++){
        if(ar[i]%2==0){
            j++;
            even_array[j] = ar[i];
        }
    }
    */
    float even_median=0;
    if(n%2==0){
        even_median = (ar[n/2]+ar[n/2 + 1])/2*1.0;
    }
    else{
        even_median = ar[n/2 + 1];
    }
    return even_median;
}
/*
float odd_for_median(int ar[],int n)
{
    int odd_array[n];
    int k=0;
    for(int i=1;i<=n;i++){

        if(ar[i]%2!=0){
            k++;
            odd_array[k] = ar[i];
        }
    }
    float odd_median=0;
    if(k%2==0){
        odd_median = (odd_array[k/2]+odd_array[k/2 + 1])/2*1.0;
    }
    else{
        odd_median = odd_array[k/2 + 1];
    }
    return odd_median;
}
*/
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int m = sizeof(ar)/sizeof(ar[1]);
    //printf("%d\n",m);
    sorted(ar,m);
    printf("Sorted array:\n");
    for(int i=1; i<=n; i++)
    {
        printf("%d ",ar[i]);
    }

    printf("\nEven length median:  %.1f",even_for_median(ar,m));
    //printf("\nOdd length median:  %.1f",odd_for_median(ar,m));
}
