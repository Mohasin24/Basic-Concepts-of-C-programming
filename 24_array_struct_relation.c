/*
1> We can create array inside a structure 
2> Also we can create array of structure object

*/

#include<stdio.h>

int main()
{

    struct Demo
    {
        int iNum;
        float fValue;
    };

    /*
    Arr is a array which contains two elements each of type struct Demo.
    Where Demo is a structure which contains two elements as integer and float.  
    */

    struct Demo Arr[2];  // object creation 

    // member by member initialisation
    Arr[0].iNum = 11;
    Arr[0].fValue = 2.5;

    Arr[1].iNum = 21;
    Arr[1].fValue = 3.14;

    printf("The size of Arr is :- %d\n",sizeof(Arr));

    // Array inside structure
    // int size = 0; Allowed
    struct Hello 
    {   
        // int size;
        //int Brr[size]; not allowed as in declartion we cant initialise size varible and allocate memory for it if it is defined globally or outside of structure within the block scope then it is allowed

        int Brr[2]; // here we had to specify the size of array
    };

    /*
    hobj is the object of struct Hello;
    Hello is a structure which contains 1 member;
    Which is a one dimensional array and each element of array conatins 2 elements of type integer
    */

    struct Hello hobj;

    // member by member innitialisation

    hobj.Brr[0] = 101;
    hobj.Brr[1] = 151;

    printf("The size of structure Hello is :- %d\n",sizeof(hobj));

    // Strings in structure
    
    struct Employee
    {
        char name[10];
        float salary;
    };

    struct Employee eobj;

    eobj.salary = 15000.0;

    // eobj.name = "Mohasin"; // Won't work as it is array so we can't access it directly

    // we can use strcpy method from string.h header file to copy name directly into array

    strcpy(eobj.name,"Mohasin");  // Hard-coded
    printf("%s\n",eobj.name);

   // but if we taking input from user then
   printf("enter the name :-\n") ;
   scanf("%s",&eobj.name);   // input from the user

    printf("%s\n",eobj.name);


    return 0;
}