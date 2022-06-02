/*
1> we can create a pointer which points to the object of structure
2> if we have a pointer pointing to object of structure then we can initialise the member of structure using indirect accessing operator (->)

*/

#include <stdio.h>

int main()
{

    struct Demo
    {   
        int Num;
        char cValue;
        float fValue;
    };

    struct Demo dobj1;

    // Ptr is pointer which holds the address of structure
    struct Demo *Ptr = &dobj1;

    // initialisation and accessing of structure member using indirect accessing operator (->)

    Ptr->Num = 11;
    Ptr->cValue = 'S';
    (*Ptr).fValue = 22.50;  // we can also write like this

    printf("Ptr->Num = %d\n",Ptr->Num);
    printf("Ptr->cValue = %c\n",Ptr->cValue);
    printf("Ptr->fValue = %0.2f\n",Ptr->fValue);
    printf("Ptr = %u\n",Ptr);
    // printf("*Ptr = %d\n",*Ptr);


    int iValue = 51;
    double dVar = 52.60;

    //We can create pointer inside the structure

    struct Hello
    {
        int *iPtr;
        double *dPtr; // if we use float insteat of double then will give less accuracy
    }; 
    
    struct Hello hobj;

    hobj.iPtr = &iValue;
    hobj.dPtr = &dVar;

    printf("hobj.iPtr = %d\n",*hobj.iPtr);
    printf("hobj.dPtr = %f\n",*hobj.dPtr);

    printf("iPtr = %u\n",hobj.iPtr);
    printf("dPtr = %u\n",hobj.dPtr);

    return 0;
}