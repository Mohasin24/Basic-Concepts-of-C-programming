/*
static global :- if we want to restrict the use of global variable from one file to another by using extern keyword we have to use static
1> memory location :- static segment of data section
2> default :-(0/0.0/'\0')
3> scope :- throughout the program
4> lifetime :- throughout the program
5> linkage :- internal
*/

#include<stdio.h>

extern int iNo1; //variable declaration 

int main()
{
    
    printf("%d\n",iNo1);
    return 0;
}