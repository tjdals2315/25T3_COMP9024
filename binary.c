#include <stdio.h>
#include "IntStack.h"

int main(void) {
   int n;
    
   printf("Enter a number: ");
   scanf("%d", &n);
    
   StackInit();
    
   // special case: 0
   if (n == 0) {
       printf("0\n");
       return 0;
   }
    
   // convert to binary
   while (n > 0) {
       StackPush(n % 2);  // get remainder (0 or 1)
       n = n / 2;         // update for next iteration
   }

// output
   while (!StackIsEmpty()) {
       printf("%d", StackPop());
   }
   printf("\n");

return 0;
}