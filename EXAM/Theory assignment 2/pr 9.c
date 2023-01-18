#include<stdio.h>
int main()
{
    int a[] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    int min = a[0];
    int sort[11];
    int temp;
    for(int k=0; k<5; k++)
    {
        for(int i=0; i<10; i++)
        {
            if(a[i]>a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        for(int i=0; i<11; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}
