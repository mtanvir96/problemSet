#include <stdio.h>
typedef unsigned int uint;

uint FindCycleLength(uint num) {
   int length = 1;

   while (num != 1) {
      if (num%2 == 0) { // even
         num = 3 * num + 1;
      } else {
         num = num/2;
      }
   }

   return length;
}

uint FindMaxCycleLen(uint firstNum, uint secondNum) {

   uint maxCycleLen = 0;
   for (uint num=firstNum; num <= secondNum; num++) {

      uint len = FindCycleLength(num);
      if (len > maxCycleLen) {
         maxCycleLen = len;
      }
   }
   return maxCycleLen;
}

int main() {

   // all i, j is less than 1,000,000 and greater than 0
   int firstNum = 10;
   int lastNum= 20;

}


