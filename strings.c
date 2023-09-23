#include<stdio.h>

#include<string.h>



void main()



{

    char str[50], temp, left, right, len, i ;

    printf("enter the string:\n");

    scanf("%s", &str);

    len = strlen(str);

    left = 0;

    right = len - 1;

    for(i = left; i<right; i++)

  {

      

    temp = str[i];

    str[i] = str[right];

    str[right] = temp;

    right--;

    

  }

  printf("\n reverse of string is: %s", str);

}