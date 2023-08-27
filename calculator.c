#include <stdio.h>

int main() {
    int n, m;
    printf("enter two numbers: ");
    scanf("%d %d", &n, &m);
    
    printf("addition: %d\n", n + m);
    printf("subtraction: %d\n", n - m);
    printf("multiplication: %d\n", n * m);
    printf("division: %d\n", m/n);
    return 0;

}