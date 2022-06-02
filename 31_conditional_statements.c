/*
1> if condition in if() block evaluates true then control gets inside the if() block and if codition evaluates false then control gets inside else if() or in else{} block
2> else{} is optional
3> if we multiple contidion then we can use if-else if-else ladder

*/

#include<stdio.h>

int main()
{

    int iNum = 0;
    printf("Please enter number between 1 to 5 :- \n");
    scanf("%d",&iNum);

    // condition
    if(iNum==2)
    { 
        printf("iNum = 2, Inside if() block");  // logic
    }
    else if(iNum==4)
    {
        printf("iNum = 4, Inside else if() block");
    }  
    else    // optional
    {
        printf("Not matching with any condition");
    }



    return 0;
}