struct workers
{
    int id;
    int age;
    float salary;

} ;

int main()
{
    struct workers emp;// = {"Jack", 30, 1234.5, "Sales"};
    struct workers *access;
    emp.id = 20032051;
    emp.age = 25;
    access = &emp;
    printf("Workers id %d\nWorkers age %d",access->id,access->age);
}
