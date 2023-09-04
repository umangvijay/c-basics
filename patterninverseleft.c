#include <stdio.h>
int main()
{
    int i,j,k,rows=10;
    for (i = 0 ; i < rows ; i++)
 {
    for(j = 0 ; j < 1 * i ; j++)
    {
        printf(" ");
    }
    for(k = 0 ; k < rows - i ; k++)
    {
        printf("*");
    }
    printf("\n");
 }
}