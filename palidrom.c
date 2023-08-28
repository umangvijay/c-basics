#include <stdio.h>

void main()
{
    int n,rem,rev=0,y;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    y=n;
    while ( n!= 0)
    {
        rem = n%10;
        rev = rev*10+rem;
        n = n/10;
    }
        if (rev == y)
        {
            printf("Palindrome");
        }
        else
        {
            printf("Not palindrome");
        }
        
    
    

}