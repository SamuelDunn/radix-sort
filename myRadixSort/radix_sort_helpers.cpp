/*
 Definitions of the helper functions used by the myRadixSort() function.
 */

#include "radix_sort_helpers.hpp"
#include <string>
using namespace std;


int* myCountingSort(int *arrayToSort, int size, int base, int sortDigit) {

   int *countingArray = new int[base];
   int *returnArray = new int[size];

   // Initialize the countingArray with all zeros
   for(int count = 0; count < base + 1; count ++) {
      countingArray[count] = 0;
   }

   for(int count = 0; count < size; count ++) {
      countingArray[getDigit(arrayToSort[count], sortDigit)] += 1;
   }

   //add up elements
   for(int count = 0; count < base - 1; count ++) {
      countingArray[count + 1] += countingArray[count];
   }

   // shift all elements in array right
   for(int count = base - 2; count >= 0; count --) {
      countingArray[count + 1] = countingArray[count];
   }
   countingArray[0] = 0;

   // Create the new sorted array
   for(int count = 0; count < size; count ++) {
      returnArray[countingArray[getDigit(arrayToSort[count], sortDigit)]] = arrayToSort[count];
      countingArray[getDigit(arrayToSort[count], sortDigit)] += 1;
   }

   delete [] countingArray;
   return returnArray;
}


int getDigit(int numIn, int digitToReturn) {
   for(int count = 0; count < digitToReturn - 1; count ++) {
      numIn /= 10;
   }
   return numIn % 10;
}






