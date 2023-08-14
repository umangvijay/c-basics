#include <stdio.h>
void main()
{
    int n1,n2,a;
    char operation;
    printf("enter a nummber");
    scanf("%d" ,&n1);
    printf("enter a number");
    scanf("%d" ,&n2);
    printf("enter a number");
    scanf("%d",&a);
    printf("enter a operation:");
    scanf("%c" ,&operation);

    if (operation =="+")
    {
        a=n1+n2;
        printf("\n the addition is = %d" , a);
    }
     else if (operation =="-")
     {
         a=n1-n2;
         printf("\n the subtraction is = %d" , a);
     }
     else if (operation =="*")
     {
         a=n1*n2;
         printf("\n the multiply is = %d" , a);
     }
     else if (operation =="/")
     {
         a=n1/n2;
         printf("\n the divide is = %d" , a);
     }
     else if (operation =="%")
     {
         a=n1%n2;
         printf("\nthe reminder is = %d" , a);
     }
      return 0;

}
