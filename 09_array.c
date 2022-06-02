/*
Array :- Array is a linear data structure which holds homogeneous elements in sequential and indexed format 

1> Name of array is internally consider as the base address of first element of the array
2> Array is mutable

consider the below code :-
*/

#include<stdio.h>

int main()
{

  int arr[5]; 
  //array definition (memory gets allocated)
  // arr is one dimensonal array which contains 5 element and each element is of type integer

  //member by member initialisation of an array
  arr[0]=11;
  arr[1]=21;
  arr[2]=21;
  arr[3]=51;
  arr[4]=101;

  //member initialisation list
    //indexing   0   1   2  
  int brr[3] = {111,151,201};

  // int brr[] = {111,151,201}; here if we did not specify the size of array then also it is allowed but,
  // int brr[]; is not allowed
  
  //array is  mutable i.e. we can change the array elements with same data type after defining it 

  int crr[5] = {11,21,51,101,111};

  printf("Array crr before changing the elements\n");
  for (int i = 0; i < 5; i++)
  {
      printf("%d\n",crr[i]);
  }

  // here if we try to initialise array element with different data type then it may contain garbage at that specific index

  crr[0]=89;
  // crr[2] = 'A'; 
  crr[3] = 199;
    
  printf("\n\n Array crr after changing the array elements\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d\n",crr[i]);
  }

  return 0;
}
