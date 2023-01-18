#include<stdio.h>

int is_prime(int *ara, int m)
{
    int p=1,k=0;
    for(int i=0; i<m; i++)
    {
            int p=1;
            if(*ara==1) p=0;

            for(int i=2; i<*ara; i++)
            {
                if(*ara%i == 0) p=0;
            }
            if(p==1) k++;
        *ara++;
    }
    return k;
}

float total_avrg(int *ar, int n)
{
    int c = 0;
    float sum=0;
    for(int i=0;i<n;i++)
    {

        if(*ar % 2==0)
        {
            sum+=*ar;
            c++;
        }
        ar++;
    }
    if(sum>0) return sum/c;
    else return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int p_count=0;
    int *ptr;
    ptr = &arr[0];
    float avg = total_avrg(&ptr[0],n);
    p_count = is_prime(&ptr[0],n);
    printf("Prime numbers: %d\n",p_count);
    printf("Average of all positive integers: %.2lf\n",avg);

}
