/*
constant :- const keyword
    if we use const with any variable then we cant change/modify its value 
*/

#include<stdio.h>

int main()
{

    const int no = 10; 
    // no++; // not allowed
    
    const int arr[4] = {1,2,3,4};
    // arr[0]=11; // not allowed

    int const *ptr = NULL;
    printf("%u\n",ptr);
    ptr = &no; //allowed
    printf("%u\n",ptr);

    int mo = 11;
    mo++; // allowed
    

    return 0;
}