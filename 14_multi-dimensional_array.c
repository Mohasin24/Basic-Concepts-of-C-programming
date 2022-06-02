#include<stdio.h>
int crr[2][4]; //get initialised with default value if not initialised
int main()
{
    int arr[2][4];  //may contain garbage if not initialised

    // arr is two dimensional array which contains 2 one dimensional array and each one dimensional array contains 4 elements
    
    // int brr[2][4] = {1,2,3,4,5,6,7,8}; 
    //we can also initialise multidimensional array by member initialisation list but it is confusing so avoid using it

    // member by member initialisation

    int brr[3][2];

    brr[0][0] = 11;
    brr[0][1] = 21;
    brr[1][0] = 51;
    brr[1][1] = 101;
    brr[2][0] = 111;
    brr[2][1] = 151;
   
//    for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d\n",brr[i][j]);
//         }
        
//     }

    return 0;
}