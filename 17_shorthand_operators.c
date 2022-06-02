/*
There are two types of shorthand oprators increment and decrement

# increment operator :- 
1> pre-increment :- value gets incremented first then it gets initialised
    e.g. ans = ++no;
2> post-increment :- value gets used first and then incremented
    e.g. ans = no++;

# decrement operator :- 
1> pre-decrement :- value gets decremented first then it gets initialised
    e.g. ans = --no;
2> post-decrement :- value gets used first and then decremented
    e.g. ans = no--;

*/

#include<stdio.h>

int main()
{

    int ans = 0;
    int no = 10;

    //pre-increment
    ans = ++no;
    printf("Pre-increment \nans = %d\n no = %d\n",ans,no);

    ans = 0;
    no = 10;
    //post-increment
    ans = no++;
    printf("Post-increment \nans = %d\n no = %d\n",ans,no);
    
    ans = 0;
    no = 10;
    //pre-decrement
    ans = --no;
    printf("Pre-decrement \nans = %d\n no = %d\n",ans,no);

    ans = 0;
    no = 10;
    //post-decrement
    ans = no--;
    printf("Post-decrement \nans = %d\n no = %d\n",ans,no);
    

    return 0;
}