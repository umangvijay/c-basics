#include <stdio.h>
int main()
{
    int i,j,k,rows=10;

    for(i = 0 ; i < rows ; i++){
        for ( j = 0 ; j < rows-i ; j++)
        {
            printf("*");

        }
        printf("\n");
    }
}