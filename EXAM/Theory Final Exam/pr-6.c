#include<stdio.h>

char return_and_argument(int n)
{
    if(n>90) return 'A';
    else return 'B';
}

float return_no_argument()
{
    float pi = 3.14159;
    return pi;
}

void no_return_with_argument(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",i+1);
    }
    printf("\n");
}

void no_return_no_argument()
{
    printf("Phitron, the best online based learning paltform.\n");
}

int  main()
{
    int size = 5;
    int marks = 85;
    printf("No_return_no_argument example: \n");
    no_return_no_argument();
    printf("\nNo_return_with_argument example: \n");
    no_return_with_argument(size);
    printf("\nReturn_with_No_argument example: \n");
    float get_pi = return_no_argument();
    printf("%f \n",get_pi);
    printf("\nReturn_with_Argument example: \n");
    char grade = return_and_argument(marks);
    printf("%c\n",grade);


}
