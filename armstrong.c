#include <stdio.h>

int main()
{
    int n,m,sum = 0,temp;
    printf("Enter a number=");
    scanf("%d", &n);
    temp = n;
    while(n > 0)
    {
        m = n% 10;
        sum = sum + (m);
        n = n/10;
    }
    if (temp = sum)
    printf("armstrong number");

    else
    printf("not armstrong number");

    return 0;
}