#include <stdio.h>
void main()
{
    int n1,n2,a;
    char OP;
    printf("\n enter a nummber");
    scanf("%d",&n1);
    printf("\n enter a number");
    scanf("%d",&n2);
    printf("\n enter a operation +or-or*");
    scanf("%c" ,&OP);

    if (OP =='+')
    {
        a=n1+n2;
        printf("\n the addition is = %d" , a);
    }
     else if (OP=='-')
     {
         a=n1-n2;
         printf("\n the subtraction is = %d" , a);
     }
     else if (OP=='*')
     {
         a=n1*n2;
         printf("\n the multiply is = %d" , a);
     }
     else if (OP=='*')
     {
         a=n1/n2;
         printf("\n the divide is = %d" , a);
     }
     else if (OP=='%')
     {
         a=n1%n2;
         printf("\nthe reminder is = %d" , a);
     }
     else
     {
        printf("\n enter valid OP");
     }
      return 0;

}
