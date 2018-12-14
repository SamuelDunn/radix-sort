/*
 Definitions for the functions used to implement the radix
 algorithm.
 */

#include "my_radix_sort.hpp"
#include "radix_sort_helpers.hpp"

void myRadixSort(int *arrayToSort, int size, int maxNum, int base) {

   // Find the number of digits in maxNum
   int numDigits = 0;
   while(maxNum != 0) {
      maxNum /= base;
      numDigits ++;
   }

   int *partiallySortedArray;
   for(int count = 1; count <= numDigits; count ++) {
      partiallySortedArray = myCountingSort(arrayToSort, size, base, count);

      // Copy partially sorted array to the parameter array
      for(int count2 = 0; count2 < size; count2 ++) {
         arrayToSort[count2] = partiallySortedArray[count2];
      }
      delete [] partiallySortedArray;
   }
}
