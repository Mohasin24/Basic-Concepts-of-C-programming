/*
Function Pointer :- A pointer which points to the function

NOTE :- 
1> In case of function pointer instead of fetching the address we can call the specific function


*/

// Prototype :-

//  int   Addition  (int,int)
//   |        |        |   
//  int   (*fPtr)   (int,int)

/*
fPtr is a pointer which is pointing to the function which accept 2 parameter both as integer and that function returns an integer
*/


#include<stdio.h>

int Addition(int no1, int no2)
{
    int Ans = 0;

    Ans = no1 + no2;
    return Ans;
}

int out(int);

int main()
{

    int a = 10, b = 15, ret = 0;
    int age = 22;
    // ret = Addition(a,b);

    int (*fPtr) (int,int) = Addition; // The of address of function is in the name of function

    ret = fPtr(a,b);

    printf("The addtion is :- %d \n",ret);

    int (*aPtr) (int) = out;

    printf("%d \n",aPtr(age));

    return 0;
}

int out(int num)
{
    printf("Your age is %d \n",num);
}












