/* Copy the given Array into another array.*/



#include <stdio.h>

int main() {
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int c[10];
   int i , size=10;

   for(i = 0; i < size; i++) {
      c[i] = arr[i];
   }
   printf(" ");

   for(i = 0; i < 10; i++) {
      printf("  %d   %d\n ", arr[i], c[i]);
   }

   return 0;
}
