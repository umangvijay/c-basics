#include <stdio.h>
 
void main()
{
   int a[20], srch, i, n,x;
   
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
   
   printf("Enter %d numbers\n", n);
   
   for (i = 0; i < n; i++)
      scanf("%d", &a[i]);
     
   printf("Enter a number to search\n");
   scanf("%d", &srch);
   
   for (i = 0; i < n; i++) {
      if (a[i] =srch) {
         printf("%d is present at location %d.\n", srch, i+1);
         x== 0;
      }
   }
   if (x == 0)
      printf("%d isn't present in the array.\n", srch);
   else
      printf("%d is present %d times in the array.\n", srch, x);
     
   return 0;
}