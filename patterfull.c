// C program to print the full pyramid pattern of stars
#include <stdio.h>

int main()
{
	int i,j,k,rows = 5;

	
	for (int i = 0; i < rows; i++) {

		
		for (int j = 0; j < 2 * (rows - i)-1; j++) 
        {
			printf(" ");
		}

		
		for (int k = 0; k < 2 * i + 1; k++) 
        {
			printf(" k ");
		}
		printf("\n");
	}
	return 0;
}