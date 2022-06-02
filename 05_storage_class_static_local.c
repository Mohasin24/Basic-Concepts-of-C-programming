/*
static local :- preserves the value of variable across the function calls
1> memory location :- static segment of data section
2> default :- may be garbage or (0/0.0/'\0')
3> scope :- function block
4> lifetime :- function block
5> linkage :- no
*/

#include <stdio.h>

void Demo()
{
    static int iNo = 11;
    iNo++;
    printf("Demo :- %d\n", iNo);
}

void Hello()
{
    auto int iNo = 11;
    iNo++;
    printf("Hello :- %d\n", iNo);
}

int main()
{

    Demo();
    Demo();
    Demo();

    Hello();
    Hello();
    Hello();

    return 0;
}