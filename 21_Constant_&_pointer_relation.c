#include<stdio.h>

int main()
{
    int temp = 0;
    /*
    no1 is a variable of type integer.
    Ptr1 is a pointer which holds address of an integer.
    */
    int no1 = 11;
    int *Ptr1 = &no1;

    // cases  
    no1++;          //Allowed
    (*Ptr1)++;      //Allowed
    Ptr1++;         //Allowed
    no1 = 10;       //Allowed
    Ptr1 = &temp;   //Allowed


    /*
    no2 is a varible of type intger which is constant.
    Ptr2 is a pointer which holds address of an integer constant.
    */
    const int no2 = 21;
    const int *Ptr2 = &no2;

    // cases  
    no2++;          //Not Allowed
    (*Ptr2)++;      //Not Allowed
    Ptr2++;         //Allowed
    no2 = 10;       //Not Allowed
    Ptr2 = &temp;   //Allowed

    /*
    no3 is a variable of type integer.
    Ptr3 is a constant pointer which holds address of an integer.
    */
    int no3 = 31;
    int *const Ptr3 = &no3;

    // cases  
    no3++;          //Allowed
    (*Ptr3)++;      //Allowed
    Ptr3++;         //Not Allowed
    no3 = 10;       //Allowed
    Ptr3 = &temp;   //Not Allowed

    /*
    no4 is a varible of type integer constant.
    Ptr4 is a constant pointer which holds address of an constant integer.
    */
    const int no4 = 51;
    const int *const Ptr4 = &no4;

    // cases  
    no4++;          //Not Allowed
    (*Ptr4)++;      //Not Allowed
    Ptr4++;         //Not Allowed
    no4 = 10;       //Not Allowed
    Ptr4 = &temp;   //Not Allowed

    return 0;
}