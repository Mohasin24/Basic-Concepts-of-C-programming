/*
typedef :- The typedef is a keyword used in C programming to provide some meaningful names to the already existing variable in the C program
*/

#include<stdio.h>

typedef struct Employee_Details
{
    int id;
    float salary;

}emp; //new name

int main()
{   
    // here struct Employee_Details = emp
    emp eobj;

    eobj.id = 25;
    eobj.salary = 15000;

    printf("The salary of employee is %0.2f\n",eobj.salary);
    printf("The code of employee is %d\n",eobj.id);

    return 0;
}