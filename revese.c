#include <stdio.h>

void main()
{
    int n,rem,rev=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while ( n!= 0)
    {
        rem = n%10;
        rev = rev*10+rem;
        n = n/10;
        
    }
    printf("Reverse of the given number is = %d", rev);

}