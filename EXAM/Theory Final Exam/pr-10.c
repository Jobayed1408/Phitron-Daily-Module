#include<stdio.h>

struct stud {
    double marks;
    char name[10];
    float roll;


};

int main() {
    int size;
    struct stud s;

    size = sizeof(s);
    printf("nSize of Structure : %d", size);

    return(0);
}
