#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    int i,j;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr2[i]);
    }

    for(i=1;i<=n;i++)
    {
        int max=arr1[i];
        for(j=i+1;j<=n;j++)
        {
            if(arr1[j]<max)
            {
                int temp = arr1[j];
                arr1[j] = max;
                max = temp;
                //printf("max = %d ",max);
            }
            arr1[i] = max;
        }

    }
    for(i=1;i<=n;i++)
    {
        int max=arr2[i];
        for(j=i+1;j<=n;j++)
        {
            if(arr2[j]>max)
            {
                int temp = arr2[j];
                arr2[j] = max;
                max = temp;
                //printf("max = %d ",max);
            }
            arr2[i] = max;
        }

    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",arr1[i]-arr2[i]);
    }
}
