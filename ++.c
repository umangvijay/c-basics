#include <stdio.h>

int main()
{
    int x=5,y;
    y=x++;// x=x+1
    printf("%d %d", x,y);
    y=++x;//x=x+1
    printf("%d %d", x,y);

}