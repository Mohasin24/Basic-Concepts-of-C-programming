/*
1> We can use scanf() method to get input string with %s format specifier
2> But if you want to take strings with spaces as input we have to use gets(_address_) method
3> We can print string with printf() or with puts(_address_) method
*/

#include <stdio.h>

int main()
{
    int iNum = 0;

    printf("Please enter the no. of characters :-\n");
    scanf("%d", &iNum);

    // // After scanning character array we have to clean the scan for next scanning we do this by fflush() method or with while(getchar()!='\n') method
    // // fflush() method is not asvisible to use so use while(getchar()!='\n') method
    
    char cStr[iNum];

    printf("Enter :-");
    
    while(getchar()!='\n');

    fgets(cStr,iNum,stdin);

    printf("%s\n",cStr);

    return 0;
}