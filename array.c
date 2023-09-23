#include <stdio.h>
void main()
{
    int i,first,last,middle,n,srch;
    int a[20];
    printf("\n Enter the size of array: ");
    scanf("%d", &n);
    printf("\n Enter the array elements: ");
    for (i=0; i<n; i++)
    {
        printf("\n");
        scanf("%d",&a[i]);
    }
    printf("\n Elements of array is: ");
    for (i=0; i<n; i++)
    {
        printf("\n %d",a[i]);
    }
    
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
            if(a[middle]<srch)
            first=middle+1;
             else if (a[middle]==srch)
            printf("%d found at location %d \n",srch,middle+1);

        
        else
        {
             last=middle-1;
             middle=(first+last)/2;
        }
        
        {
            last=middle-1;
          middle=(first+last)/2;

        }
            
        


    }
    if (first>last)
    printf("not forced %d is not present in the array \n",srch);
}