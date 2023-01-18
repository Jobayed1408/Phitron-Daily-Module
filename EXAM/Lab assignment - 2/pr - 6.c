
#include<stdio.h>

int is_mod_3(int ar, int n)
{
    int count=0;
        if((ar%3==0)){
            count=1;
        }
    return count;
}

int is_mod_5(int ar, int n)
{
    int count=0;
        if((ar%5==0) )
            count=1;
    return count;
}
int total(int arr[], int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        if((is_mod_3(arr[i],n)) && (is_mod_5(arr[i],n))){
            res++;
        }
        else if((is_mod_3(arr[i],n)) || (is_mod_5(arr[i],n))){
            res++;
        }
    }
    if(res>0) return res;
    else return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t = total(arr,n);
    printf("%d",t);
}

