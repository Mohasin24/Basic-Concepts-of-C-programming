/*
1> Padding is considered as allocated memory by the compiler but we cant access that memory
2> According to memory management policies compiler allocates the memory either in terms of 4/8 bytes
3> We use #pragma pack (size_byte) to avoid memory wastage
*/

#include<stdio.h>

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

    printf("The size of object dobj = %d\n",sizeof(dobj)); 
    // here size should be 17 bytes but compiler gives 24 bytes as it allocates memory in terms of 8 bytes
    // 1st 8 bytes for i and c
    // 2nd 8 bytes for f
    // 3rd 8 bytes for d

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

    printf("The size of hobj is :- %d\n",sizeof(hobj)); 
    // here size should be 14 bytes but compiler gives 20 bytes as it allocates memory in terms of 4 bytes
    // 1st 4 bytes for iVal
    // 2nd 4 bytes for fVal
    // 3rd 4 bytes for cVal
    // 4th 4 bytes for iNum
    // 5th 4 bytes for C


    return 0;
}