/*
If there is only one statement inside the if-else block we can replace it with ternay operator
*/

/*
Syntax of ternary operator :-

    condition ? doSomething if TRUE : doSomething if FALSE ;

*/

// Que :- Write a program to check the given number is odd or even first use if-else and then ternary operator

#include<stdio.h>

void ifElse(int);
void Ternary(int);

int main()
{

    int iNum = 0;
    printf("Please enter the number :- \n");
    scanf("%d",&iNum);

    ifElse(iNum);
    printf("\n******\n\n");
    Ternary(iNum);

    return 0;
}

void ifElse(int iNum)
{
    printf("Using if-else.\n");
    if(iNum % 2 == 0)
    {
        printf("The given number %d is even.\n",iNum);
    }
    else
    {
        printf("The given number %d is odd.\n",iNum);
    }
}

void Ternary(int iNum)
{   
    printf("Using ternary operator\n");
    iNum % 2 == 0 ? printf("The given number %d is even.\n",iNum) : printf("The given number %d is odd.\n",iNum);
}