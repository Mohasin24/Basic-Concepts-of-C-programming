#include<stdio.h>
#pragma pack(1) // pre-processor directive, here 1 tells the compiler to allocate the memory in terms of 1 bytes to avoid padding

int main()
{
    // Example 1
    struct Demo 
    {
        int i;
        char c;
        float f;
        double d;
    };

    struct Demo dobj;

    printf("After the size of object dobj = %d\n",sizeof(dobj)); 

    // Example 2 :-

    struct Hello
    {
        int iVal;
        float fVal;
        char cVal;
        int iNum;
        char C;
    };

    struct Hello hobj;

    printf("After the size of hobj is :- %d\n",sizeof(hobj)); 
   

    return 0;
}