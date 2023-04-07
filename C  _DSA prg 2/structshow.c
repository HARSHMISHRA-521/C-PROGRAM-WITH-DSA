#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[20];
} emp;
emp show(emp e1,emp e2)
{
    printf("\nthe code of the first employee is : %d\n", e1.code);
    printf("\nthe salary of the first employee is : %f\n", e1.salary);
    printf("\nthe name of the first employee is : %s\n", e1.name);

    printf("\nthe code of the second employee is : %d\n", e2.code);
    printf("\nthe salary of the second employee is : %f\n", e2.salary);
    printf("\nthe name of the second employee is : %s\n", e2.name);
}
int main()
{
    emp e1, e2;
    e1.code = 564;
    e1.salary = 68.25;
    strcpy(e1.name, "harsh");

    e2.code = 897;
    e2.salary = 90.10;
    strcpy(e2.name, "raksh");
    show(e1, e2);
    return 0;
}