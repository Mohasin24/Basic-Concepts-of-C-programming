/*
1> realloc is used to reallocate the previously allocated memory
2> realloc is used to increase or decrease the memory
3> The first parameter of realloc is the base address of memory which is returned by the malloc
4> Second parameter is new size it can be increased or decreased size
5> If the first parameter is NULL then the realloc is works as malloc() function
6> If the second parameter is zero realloc works as a free() function which deallocates the memory
7> realloc works same with malloc as well as calloc
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int size = 0;
    int newSize = 0;
    int *Ptr = NULL;

    printf("Enter the number of elements :-\n");
    scanf("%d", &size);

    printf("The initial size is %d\n", size);

    Ptr = (int *)malloc(size * sizeof(int));

    // check the memory allocation

    Ptr == NULL ? printf("Unable to allocate the memory\n") : printf("memory allocated successfully\n");

    // initialisation

    for (int i = 0; i < size; i++)
    {
        printf("Please enter the no. %d element :- \n", (i + 1));
        scanf("%d", &Ptr[i]);
    }

    // display elements

    printf("The elements are :-\n");

    for (int i = 0; i < size; i++)
    {
        printf("Element at no. %d is :- %d\n", (i + 1), Ptr[i]);
    }

    // taking the new size as an input from the user

    printf("Please enter the new size :-\n");
    scanf("%d", &newSize);

    printf("The new size is %d.\n", newSize);

    // reallocation using realloc

    Ptr = (int *)realloc(Ptr, newSize);

    // initialisation

    if (newSize > size)
    {
        for (int i = size; i < newSize; i++)
        {
            printf("Please enter the element no. %d :-\n", (i + 1));
            scanf("%d", &Ptr[i]);
        }
    }

    for (int i = 0; i < newSize; i++)
    {
        printf("Element at no. %d is :- %d\n", (i + 1), Ptr[i]);
    }

    // de-allocating the memory

    free(Ptr);

    return 0;
}