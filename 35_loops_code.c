/*
1> Write a code using for loop to print the numbers from 1 to 10.
2> Write a code using while loop to print the numbers from 1 to 10 and if number = 6 exit the loop.
3> Write a code using do while loop to print the numbers from 1 to 10 and if number = 3 skip that number.

*/

#include <stdio.h>

int main()
{
    printf("For loop :- \n");

    //    initialisation    condition  updation
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i); // logic
    }

//=================================================================================================

    printf("While loop break :-\n");

    int i = 1; // intialisation

    // condition
    while (i <= 10)
    {
        if (i == 6)
        {
            break; // loop exit
        }

        printf("%d\n", i); // Logic

        i++; // updation
    }
//=================================================================================================

    printf("while loop continue :- \n");

    int k = 1; // initialisation

    // condition
    while (k <= 10)
    {
        // Logic

        if (k == 3)
        {
            k++;
            continue; // continue will skip the execution of 3
        }
        printf("%d\n", k);
        k++;
    }
//=================================================================================================

    printf("do while :-\n");

    int j = 10; // initialisation

    do
    {
        printf("do while gets executed at least one's irrespective of condition"); // logic

    } while (j < 10); // condition

    // here the codition becomes false still printf gets executed

    return 0;
}