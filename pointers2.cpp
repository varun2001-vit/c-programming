#include <stdio.h>
const int MAX = 3;
int main () 
{
   int  var[] = {10, 100, 200};
   int  i, *ptr;
   /* let us have array address in pointer */
   ptr = var;
   for ( i = 0; i < MAX; i++) {
      printf("Address of var[%d] = %x----%x\n", i, ptr,&var[i] );
      printf("Value of var[%d] = %d-----%d\n", i, *ptr,var[i] );
ptr++;
   }
   return 0;
}

