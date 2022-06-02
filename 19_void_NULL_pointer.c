/*
Void pointer :- (generic pointer) pointer which can point to any data type

NULL pointer :- Pointer which points to zeroth address of our ram
*/

#include<stdio.h>

int main()
{

    int iValue = 11;
    float pi = 3.14;

    int *iPtr = &iValue; // Specific pointer

    void *Ptr = NULL; //generic pointer initialised to NULL

    Ptr = &pi; 
                    
    printf("%.2f",*(float *)Ptr); // typecasting with (float *)

    return 0;
}