/*
We can create a pointer of same structure inside the structure and that structure is called as self referntial structure
*/

#include <stdio.h>

int main()
{

    struct Demo
    {
        int iNum;
        struct Demo *Ptr;
    };

    struct Demo dobj1, dobj2, dobj3;

    struct Demo *Ptr = &dobj1;

    dobj1.iNum = 11;
    dobj1.Ptr = &dobj2;

    dobj2.iNum = 21;
    dobj2.Ptr = &dobj3;

    dobj3.iNum = 51;
    dobj3.Ptr = NULL;

    printf("dobj1.Ptr = %d\n", dobj1.Ptr->iNum);      // 21
    printf("dobj1.Ptr = %d\n", dobj2.Ptr->iNum);      // 51
    printf("dobj1.Ptr = %d\n", dobj1.Ptr->Ptr->iNum); // 51

    return 0;
}