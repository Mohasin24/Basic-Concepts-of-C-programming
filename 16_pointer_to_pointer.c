/*

*/

#include<stdio.h>

int main()
{
    int iNum = 21;

    int *a = &iNum;

    int **b = &a;

    int ***c = &b;

    printf("The value of *a :- %d\n",*a);       //21
    printf("The value of **b :- %d\n",**b);     //21    
    printf("The value of ***c :- %d\n",***c);   //21    

    printf("The value of *b :- %u\n",*b);
    printf("The value of *c :- %u\n",*c);
    printf("The value of **c :- %u\n",**c);

    return 0;
}