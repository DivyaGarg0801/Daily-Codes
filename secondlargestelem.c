#include <stdio.h>

int main() {
   int a[10] = {101, 11, 3, 4, 50, 69, 7, 8, 9, 0};
   int i, largest, second;

   if(a[0] > a[1]) {
      largest = a[0];
      second  = a[1];
   } else {
      largest = a[1];
      second  = a[0];
   }

   for(i= 2; i< 10; i++) {
      if( largest < a[i] ) {
         second = largest;
         largest = a[i];
      } else if( second < a[i] ) {
         second =  a[i];
      }
   }

   printf("Largest - %d \nSecond - %d \n", largest, second);   

   return 0;
}