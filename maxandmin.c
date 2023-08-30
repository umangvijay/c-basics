#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter a number: ");
    scanf("%d", &num2);
    printf("Enter a number: ");
    scanf("%d", &num3);
    
    int max,mid,min;
    if (num1 >= num2 && num1 >= num3)
    {
        max = num1;
        
            if (num2>=num3){
            mid=num2;
            min=num3;
            }
            else{
                mid=num3;
                min=num2;
                }
            }
        
        else if (num2>=num1 && num2>=num3){
        max=num2;
        
            if (num1>=num3)
            {
            mid=num1;
            min=num3;
            }
            else
            {
               mid=num3;
               min=num1;
            }
        } else{
            max=num3;
            if (num1>=num2){
                mid=num1;
                mid=num2;
            }
            else{
                mid=num2;
                min=num1;
            }
        }
        printf("Arrange number %d %d %d\n", max,mid,min);

        return 0;
 }
 
