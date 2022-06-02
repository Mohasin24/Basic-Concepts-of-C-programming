/*
we can create the constant object of structure , we have to use the member initialisation list to initialise the members of structure otherwise compiler will generate erro
*/

#include <stdio.h>

int main()
{
    struct Demo
    {
        int i;
        int j;
    };

    /*
    dobj is a object of struct Demo which is a constant
    */
    const struct Demo dobj = {11, 21};

    // dobj.i = 21; Not allowed

    printf("%d\n", dobj.i);

    //### constant members inside the structure

    struct Hello
    {
        const int k;
        const int f;
    };

    struct Hello hobj = {101, 151}; // member initialisation list

    // hobj.k = 11; Not allowed

    printf("%d\n", hobj.k);

    return 0;
}