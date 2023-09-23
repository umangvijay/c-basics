#include <stdio.h>
int main()
{
    int a[10],sum=0,i;
    float avg;
    printf("\n Enter 10 value: \n");
    for (i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for (i=0;i<=9;i++)
    sum=sum+a[i];
    printf("\n Sum of digits is: %d\n",sum);
    avg=sum/10.0;
    printf("\n Average of digit is: %f\n",avg);

    return 0;
    
}