/*
1> Concept of Union is exactly same as structure except the memory allocaion strategy
2> In case of union the memory only gets allocated for largest member from the union due which we only initialise one member;
3> if all member in union are allocating same size of memory then the member we initialise the last will get conider
*/

#include<stdio.h>

int main()
{

    union Demo
    {
        int i;
        float f;
        char c;
        double d;
    };

    union Demo dobj;
    printf("The size of dobj :- %d\n",sizeof(dobj));

    dobj.c = 'A'; 
    dobj.d = 3.14; //memory allocated 
    dobj.f = 1.52;
    printf("%c\n",dobj.c);
    printf("%f\n",dobj.d);
    printf("%f\n",dobj.f);
    return 0;
}