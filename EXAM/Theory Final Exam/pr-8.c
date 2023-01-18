#include<stdio.h>
struct person
{
    char name[50];
    int roll;
    int marks;
};
int main()
{
    struct person p1;
    printf("Enter information: \n");

    printf("Enter name: ");
    //fflush(stdin);
    scanf("%s",p1.name);
    printf("Enter roll number: ");

    //fflush(stdin);
    scanf("%d",&p1.roll);
    printf("Enter marks: ");

    //fflush(stdin);
    scanf("%d",&p1.marks);

    printf("Displaying Information:\n");
    printf("Name: %s\n",p1.name);
    printf("Roll number: %d\n",p1.roll);
    printf("Marks: %d\n",p1.marks);
}
