#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max) max = arr[i];
    }
    //printf("%d\n",max);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tem = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tem;
            }
        }
    }
    /*
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    */
    int sum1=0,sum2=0;
    int count1 = 0,count2=0;
    for(int i=n-1; i>=0; i--)
    {
        //if(max%2==0){
        if(arr[i]%2==0)
        {
            count1++;
            if(count1>2) continue;
            else sum1=sum1+arr[i];
            //printf("%d %d\n",count1,sum1);
        }
        //}
        //else{
        if(arr[i]%2!=0)
        {

            count2++;
            if(count2>2) continue;
            else sum2=sum2+arr[i];
            //printf("%d %d\n",count2,sum2);
        }
        //}
    }

    if(max>sum1 && max>sum2)
    {
        if(max%2==0){
            printf("%d\n",max);
        }
    }

    else if(sum1>=sum2)
    {
        if(sum1%2==0) printf("%d\n",sum1);
        else printf("%d\n",sum2);
    }
    else if(sum1<sum2)
    {
        if(sum2%2==0) printf("%d\n",sum2);
        else printf("%d\n",sum1);
    }



}
