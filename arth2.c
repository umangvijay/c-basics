#include <stdio.h>

int main()
{
    int n, m, choice;
    
    printf("Enter two number: ");
    scanf("%d %d", &n,&m);

    printf("select a operation:\n");
    printf("1. Addition\n" );
    printf("2. Subtraction\n");
    printf("3. Multipication\n");
    printf("4. Divide\n");
    scanf("%d" ,&choice);

    if (choice==1){
    printf("Result : %d\n", n + m);}

    else if (choice==2){
        printf("Result : %d\n", n - m);
    }

    else if (choice==3){
        printf("Result : %d\n", n * m);
    }

    else if (choice==4) {
        if ( m !=0) {
        printf("Result : %d\n" , n / m);
    }
    else{
        printf("Cannot be divide by zero . \n");
    
    }
    } else {
        printf("Invalid number.\n");
    }

    return 0;
}