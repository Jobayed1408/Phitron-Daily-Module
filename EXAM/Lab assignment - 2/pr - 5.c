#include<stdio.h>

int  Consecutive(int a[], int n){
    int sum = 0;
    int i = 1;
    while(i<=n)
    {
        if((i%2==0) && (a[i]%2==0)){
            sum = sum + i+a[i];
        }
        else if((i%2!=0) && (a[i]%2!=0)){
            sum = sum + i+a[i];
        }
        else{
            sum=sum;
        }
        i++;
    }
    return sum;
}

int main()
{
    int t;
    scanf("%d ",&t);
    int arr[t+1];
    for(int i=1;i<=t;i++){
        scanf("%d",&arr[i]);
    }
    int r = Consecutive(arr,t);
    printf("%d\n",r);

}
