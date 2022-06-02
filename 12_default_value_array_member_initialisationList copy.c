/*
If the size of an array is N and if we initialized less than N elements then all the remaining un-initialized elements gets initialized with the default value of the data type of the array

#Default values are as follows :-

integer = 0
character = '\0'
float = 0.0
double = 0.0

This rule is only applicable if we use the member initialisation list method
There is no effect of global or loacal variable 

*/


#include <stdio.h>

// int arr[5] = {11, 21};
int main()
{

    int arr[5] = {11,21};
    char crr[5] = {'A', 'B', 'C'};
    float frr[5] = {1.1, 2.1};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("*********\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", crr[i]);
    }
    printf("*********\n");

    for (int i = 0; i < 5; i++)
    {   
        printf("%f\n", frr[i]);
    }
    printf("*********\n");

    return 0;
}