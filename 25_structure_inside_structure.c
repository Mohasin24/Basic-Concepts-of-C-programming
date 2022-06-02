////   NESTED STRUCTURES

#include <stdio.h>

int main()
{

    /*
    We can create inner structure seprately and create its object inside the outer structure
    Example :-
    */

    struct Inner
    {
        int i;
        int j;
    };

    struct outer // Outer structure
    {
        int iNum;
        float fValue;
        struct Inner iobj; // Inner structure
    };

    struct outer oobj;

    // member by member initialisation

    oobj.iNum = 11;
    oobj.fValue = 3.14;
    oobj.iobj.i = 10;
    oobj.iobj.j = 20;

    /*
    we can declare & create the object of inner struture inside outer structure
    */

    struct Outer2
    {
        int iNum;

        struct Inner2
        {
            int i;
            int j;
        } iobj2; // here we have to decalare the object of Inner structure immedietly after structure declaration we cannot create seperate object for inner structure outside the outer structure
    };

    struct Outer2 oobj2;

    // initialisation same as above

    oobj2.iNum = 101;
    oobj2.iobj2.i = 21;
    oobj2.iobj2.j = 51;

    return 0;
}
