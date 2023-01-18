
#include<stdio.h>

int is_seven_present(int *n)
{
    int a=0;
    while(*n!=0)
    {
        int m=*n%10;
        if(m==7) a=1;

        *n/=10;
    }
    return a;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m;
    if(n%2==0) m=n/2;
    else {
        //double k=(1.0*n)/2;
        m = ceil((1.0*n)/2);
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(is_seven_present(&arr[i])) k++;
    }

    if(k>=m) printf("Beautiful\n");
    else printf("Ugly\n");

}
