#include <stdio.h>
 int main()
 {
    int a,b,t;
    
    printf("Enter a\n");
    scanf("%d", &a);

    printf("Enter b\n");
    scanf("%d", &b);

    t=a;
    a=b;
    b=t;

    printf("After swaping value first number is = %d and value of secound number is = %d", a,b);
    printf("After swapping value secound number is = %d and value of first number is = %d",b,a);
    
 
 }
