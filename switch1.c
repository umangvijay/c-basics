#include <stdio.h>
int main()

{
    int choice,a,b,s;
    
    while(1)
    {
        printf("\n 1. Addition");
        printf("\n 2. odd-even");
        printf("\n 3. prient n number");
        printf("\n 4. Exit");
        printf("\n Enter the choice");
        scanf("%D", &choice);
        switch (choice)
        {
          case 1:
          printf("Enter two number");
          scanf("%d %d", &a,&b);
          s=a+b;
          printf("the sum of number is %d", s);
          break;

          case 2:
          printf("Enter a number");
          scanf("%d", &a);
          if(a%2==0)
          printf("Number is even");
          else 
          printf("Number is odd");
          break;

          case 3:
          printf("Enter the number");
          scanf("%d", &a);
          for (b=1; b<=a; b++)
          printf("%d", b);
          break;

          case 4:
          exit (0);


          default:
          printf("Invalid choice");

        }
     return 0;
    }
   

}

