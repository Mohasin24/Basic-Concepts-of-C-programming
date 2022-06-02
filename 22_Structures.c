/*
1> Structure in C is a collection of variables of different types under a single name.
2> When we create the object of structure then the memory gets allocated in order in which the members of structure declared in the structure.
3> every time we create new object of same struture new fresh memory gets allocated & we can initialise elements in any sequence but memory gets allocated in decalared sequence
4> Inside structure we cannot define a function

## NOTE :- There is a ';' at the end of structure declaration

*/

#include <stdio.h>

int main()
{
    // Demo is a structure which contains 3 elements as integer,float and character
    struct Demo
    {
        // int iNo = 12; Not allowed as memory gets allocated after object creation
        int Num;
        float fValue;
        char cValue;
    }dobj1; 
    // here we have created the object of Demo immedietly after structure declaration
    
    // initialisation of structure elements using "." operator
    // member by member intialisation
    dobj1.Num = 11;
    dobj1.fValue = 1.2;
    dobj1.cValue = 'A';

    printf("dobj1.Num = %d\n",dobj1.Num);
    printf("dobj1.fValue = %f\n",dobj1.fValue);
    printf("dobj1.cValue = %c\n",dobj1.cValue);
    printf("Size of dobj1 %d\n",sizeof(dobj1));

    printf("\t*****\n");

    // we can create object of structre with this method also
    // member initialisation list method
    // for member initialisation list we have to initialise the elements in declared sequence

    // struct Demo dobj2 = {'D',21,3.14};  Incorrect

                     //  int    float   char
    struct Demo dobj2 = {21,    3.14,   'D'};

    printf("dobj2.Num = %d\n",dobj2.Num);
    printf("dobj2.fValue = %f\n",dobj2.fValue);
    printf("dobj2.cValue = %c\n",dobj2.cValue);
    printf("Size of dobj1 %d\n",sizeof(dobj1));

    return 0;
}