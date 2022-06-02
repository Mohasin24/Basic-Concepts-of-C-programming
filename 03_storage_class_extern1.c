/*
extern :- default storage class of global variable
1> memory location :- Data segment
2> default :- (0/0.0/'\0')
3> scope :- throughout the program
4> lifetime :- throughout the program
5> linkage :- external

    We can access variables from another file using extern keyword
*/

#include <stdio.h>

extern int iNo1;    // variable declaration
extern void Demo(); // we can also access funtions using extern
extern int arr[4];
extern int *ptr;
extern struct Demo;

int main()
{

    printf("%d\n", iNo1);
    Demo();
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("Address of array arr is :- %u\n", ptr);
    printf("First element of array arr is :- %d\n", *ptr);

    // struct Demo obj; // we cannot access structures using extern keyword same for union

    return 0;
}


/*
Conclusion :-
    We can access primitive and derived data types using extern
*/