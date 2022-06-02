/*
We can perform three arithematic operations on pointers as :- 
1>pointer + Number
2>pointer - Number
3>pointer - pointer
*/

/*   // address :-      100   104   108   112  
    int arr[4] =    {   11    ,21   ,51   ,101};
    // index             0       1     2      3

    int *iPtr = arr;

   
*/
/*
## Addition operation   ** consider base address of arr as 100
    
    pointer + Number
Example :- 
            pointer + 2
            = pointer + 2(sizeof(pointer-type))
            = pointer +  2(sizeof(int))
            = pointer + (2*4)
            = 100 + 8
            =108
*/
/*
## Substraction operation  ** consider pointer pointing to address 108
    
    pointer - Number
Example :- 
            pointer - 2
            = pointer - 2(sizeof(pointer-type))
            = pointer -  2(sizeof(int))
            = pointer - (2*4)
            = 108 - 8
            =100
*/
/*
## Pointer - Pointer operation
    //106       102
    pointer - pointer
Example :- 
            pointer - pointer
            =(pointer - pointer)/sizeof(pointer_type)
            = (106-102)/4
            = 4/4
            = 1
*/


#include<stdio.h>

int main()
{

    int arr[5] = {11,21,51,101,151};

    int *iPtr = &arr[0];

    int *jPtr = &arr[3];

    for (int iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("Address of %d is :- %u\n",arr[iCnt],&arr[iCnt]);
    }
    

    // Addition
    iPtr = iPtr + 2;
    printf("Address of pointer (iPtr = iPtr + 2) pointing to is %u and element at that address is %d\n",iPtr,*iPtr);

    // subtraction
    jPtr = jPtr-2;
    printf("Address of pointer (jPtr = jPtr-2) pointing to is %u and element at that address is %d\n",jPtr,*jPtr);

//    (int)jPtr =(jPtr -iPtr);
//     printf("Address of pointer pointing to is %u and element at that address is %d\n",jPtr,*jPtr);

    return 0;
}