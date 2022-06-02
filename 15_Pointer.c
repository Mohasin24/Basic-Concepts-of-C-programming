/*
Pointer :-
            Pointer is considered as a variable which stores the address

Size of pointer :- 8 bytes

NOTE :- 
1> In 32 bit application address of each data type is of type long integer and the size of long integer is 8 byte.
2> Due to this the size of pointer is 8 bytes. But in some compiler it may be 4 bytes
3> The data type before the pointer name is tells that how many bytes of memory be to fetch

*/

#include<stdio.h>
int main()
{
    // Example of pointer

    int iNo = 11;
    
    int *iPtr = &iNo;

    // iPtr is a pointer which points to the integer
    // As pointer stores the address we have to use address of operator before the identifier of variable to which pointer is pointing

    // here '*' operator is known as dereference operator

    // If we want to fetch the address of variable to which pointer is pointing

    printf("The address of iNo is :- %u\n",iPtr); 

    // If we want to fetch the data of a variable to which pointer is pointing

    printf("Value of iNo is :- %d\n",*iPtr);

    // If we want to fetch the address of pointer

    printf("Address of pointer iPtr :- %u\n",&iPtr);

    return 0;
}


