#ifndef radix_sort_helpers_h
#define radix_sort_helpers_h

/*
int* myCountingSort(int *arrayToSort, int size, int base, int sortDigit);
 is a modified version of the regular counting sort algorithm. It takes the
 following 4 parameters:
 1. "arrayToSort" is a plain old array of type int (no negative numbers allowed).
 2. "size" is the size of the input array
 3. "base" is the radix (the base) of the elements contained within the input
    array.
 4. "sortDigit" allows the user to indicate the number of digits the algorithm
    should consider when comparing two elements of the input array to determine
    which is smaller than the other. For example, if sortDigit is set to 3 only
    the first three digits of each element in the input array will be used for
    comparison. If the user wants to sort the input array in ascending order
    "sortDigit" should be set equal to the number of digits in the largest
    possible value that can be contained in the input array. If the largest
    possible value that the array can contain is 1740, for example, then
    "sortDigit" should be set to 4.
 myCountingSort() will return a pointer to the first element of an array
 allocated on the heap. Therefore, the array returned by this method must
 be deleted manually by the caller before control is transferred from it.

 
int getDigit(int numIn, int digitToReturn);
takes in a number (the "numIn" parameter) and the place value
(the "digitToReturn" parameter) of "numIn" that the caller wants returned.
The place value is counted from the right with the rightmost digit being the
 1st place value. For example if numIn == 1265 and digitToReturn == 2 this
function would return 6. If "digitToReturn is larger than the length of
"numIn" getDigit() returns 0.
*/

int* myCountingSort(int *arrayToSort, int size, int base, int sortDigit);
int getDigit(int numIn, int digitToReturn);


#endif
