/*
1> In dynamic memory allocation we can decide the size of memory at run time.
2> In case of dynamic memory allocation the memory gets allocated in heap.
3> In dynamic memory allocation we have to de-allocate the memory expicitly.
4> malloc :- Memory allocation
5> Prototype of malloc :- (void *)malloc (int size);
6> Return value of malloc is (void*) because it is used to allocate memory for any datatype, it is a generic pointer we have to typecast it to specific.
7> We can initialise and access the element of malloc like array
8> If memory does not get allocated then the malloc returns NULL

### Note :- We have to include "stdlib.h" header file for dynamic memory allocationf 
            Always remember to deallocate the memory after its use
*/

// Prototype of malloc :- (void *)malloc (int size);

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    int *Ptr = NULL;
    int j = 0;

    printf("Please enter the number of elements :-\n");
    scanf("%d",&size);

    // STEP 1 : Allocate the memory

    //    typecasting   function  input                 size of     
    //                   name     by user       X       datatype
    Ptr =   (int *)       malloc  (size           *       sizeof(int));      

    if(Ptr==NULL)
    {
        printf("Unable to allocate the memory.\n");
    }
    else
    {
        printf("Memory allocated successfully.\n");
    }

    // STEP 2 : Use the memory   

    // initialisation of malloc |

    for(int i = 0; i<size; i++)
    {
        printf("Please enter the element no. %d :-\n",(i+1));
        scanf("%d",&Ptr[i]);         
    }
    
    //accessing the element from malloc 

    while (j < size)
    {
        printf("Element at no. %d is :- %d\n",(j+1),Ptr[j]);
        j++;
    }
    
    // STEP 3 : De-allocate the memory

    free(Ptr);

    printf("\n\t*****\n");
    printf("After new allocation of the memory in Ptr\n");

    // Again new memory alloacation

    Ptr = (int *)malloc(size*sizeof(int)) ;    
    printf("The default value of malloc is :- \n");

    for (int i = 0; i < size; i++)
    {
        printf("Element at no. %d is :- %d\n",(i+1),Ptr[i]);  // It may contain garbage value or zero
    }

    // de-allocate the memory

    free(Ptr);

    return 0;
}