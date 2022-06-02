/*
1> calloc :- Calculated memory allocation
2> when we allocate memory for calloc it gets initialise with its default value that is zero
3> In calloc we dont have to do the calculation of number of bytes we have to pass two arguments as number of elements and size of each element.
4> Like malloc we dont have to do the multiplication instead with comma pass two arguments  

*/

// prototype :- (void *)calloc(number_of_elements,sizeof(datatype))

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size  = 0;
    int *Ptr = NULL;

    printf("Please enter the number of elements :-\n");
    scanf("%d",&size);

    //     typecasting   function    user             integer   
    //                    name       input   comma      size

    Ptr = (int *)       calloc      (size     ,     sizeof(int));

    printf("The default value of alloacted memory by calloc :-\n");

    for(int i = 0; i<size; i++)
    {
        printf("Element at no. %d is :- %d\n",(i+1),Ptr[i]);
    }

    // de-allocate the memory

    free(Ptr);  

    return 0;
}