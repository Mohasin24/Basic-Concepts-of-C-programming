/*
1> The switch case internally uses concept of jump table, after getting the matching case the control
of execution get transfered directly to that particular i.e. it skips the cases which are not matching.

2> Default case gets executed if there is no matching case in our switc it is optional

3> For stoping after a particular case we have to use break keyword
*/

/*
Que :- Write a program to display time of exam of school students :-
1st std - 8 AM
2nd std - 9 AM
3rd std - 10 AM
4th std - 11 AM
5th std - 12 AM

*/

#include <stdio.h>

int main()
{

    auto int iStd = 0;

    printf("Please enter your standard :- \n");
    scanf("%d",&iStd);

    switch (iStd)
    {
    case 1:
        printf("Your exam is at 8 AM.\n");
        break;
    case 2 :
        printf("Your exam is at 9 AM.\n");
        break;
    case 3 :
        printf("Your exam is at 10 AM.\n");
        break;
    case 4 :
        printf("Your exam is at 11 AM.\n");
        break;
    case 5 :
        printf("Your exam is at 12 AM.\n");
        break;
    case 6 :
        printf("Your exam is at 1 PM.\n");
        break;
    default:
        printf("Please enter the valid standard !\n");
        break;                     
        //In default case if do not use the break keyword still it will give correct output but it is good practice to keep code in symmetry
    }

    return 0;
}