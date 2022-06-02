#include <stdio.h>

int brr[4];
// if we define array globally then uninitialised array elements will get initialised with its default value

int main()
{
    // if we initialise with member by member initialisation then for local variable remaining un-initialised array elements may contain garbage
    int arr[5];
    arr[0] = 11;
    arr[1] = 21;
    arr[2] = 51;

    printf("Local array elements un-initialised\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    brr[1] = 21;
    brr[2] = 51;
    printf("\nGlobal array elements\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", brr[i]);
    }

    return 0;
}