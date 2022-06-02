/*
auto :- only applicable for local variables
1> memory location :- stack
2> default :- may be garbage or (0/0.0/'\0') 
3> scope :- function block
4> lifetime :- function block
5> linkage :- no

register :- only applicable for local variables of type character and integer
1> memory location :- cpu register (it is a request)
2> default :- may be garbage or (0/0.0/'\0') 
3> scope :- function block
4> lifetime :- function block
5> linkage :- no

*/

#include<stdio.h>

int main()
{
    
    auto int iNo1 = 11; //auto is default storage class of local variable

    register int iNo2 = 21;
    
    // auto register int iNo2 = 21; // not allowed

    // int *ptr = &iNo2; //throws error


    // printf("%f",ptr);
    
    return 0;
}