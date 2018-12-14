/*
 This file contains the declarations for the functions used to implement the
 radix sort algorighm.


 void myRadixSort(int *arrayToSort, int size, int maxNum, int base = 10);
 takes in a plain old array of type int and sorts whose elements are base 10
 numbers and sorts the elements in ascending order.
 The "size" parameter indicates the size of the input array.
 The "maxNum" parameter gives should be set equal to the largest possible value
 that the input array can contain.
 The "base" parameter is set to 10 by default so that the radix sort algorithm
 will process numbers in base 10.
*/


#ifndef my_radix_sort_hpp
#define my_radix_sort_hpp


void myRadixSort(int *arrayToSort, int size, int maxNum, int base = 10);

#endif
