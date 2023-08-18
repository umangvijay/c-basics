#include <stdio.h>

void main(){

    int i,j;
    for (i = 1; i <=2; i++);{
    printf("Outer : %d\n", i);}

    for (j =1; j <= 3; i++){
        printf("Inner : %d\n", j);
    }

}
