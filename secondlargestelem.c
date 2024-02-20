#include <stdio.h>

int main()
 {
   int i,n;
   printf("Enter array elements:");
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   int largest, second;

   if(a[0] > a[1]) {
      largest = a[0];
      second  = a[1];
   } else {
      largest = a[1];
      second  = a[0];
   }

   for(i= 2; i<n; i++) {
      if( largest < a[i] ) 
      {
         second = largest;
         largest = a[i];
      } 
      else
      {
         second =  a[i];
      }
   }

   printf("Largest - %d \nSecond - %d \n", largest, second);   

   return 0;
}