/*
String :- String is a character array terminated by a null i.e. '\0'
*/

#include<stdio.h>

int main()
{

    char cString[] = {'m','o','h','a','s','i','n','\0'}; 

    // here the name MOHASIN will get stored in a charcter array as it is a string the array will end with '\0'

    // '\0' does not allocate the memory

    char str[] = "Mohasin"; // This method also works but you have to write the string int "" quotes
        
    printf("%s\n",cString);
    printf("%c\n",str[0]);

  
   return 0;
}