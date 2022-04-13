#include <stdio.h>
#include <conio.h>
int main() 
{
	int p, numbers[5],total=0;
	printf("\nInput the first number: "); 
    scanf("%d", &numbers[0]);
    printf("\nInput the second number: "); 
    scanf("%d", &numbers[1]);
    printf("\nInput the third number: "); 
    scanf("%d", &numbers[2]);
	printf("\nInput the fourth number: "); 
    scanf("%d", &numbers[3]);
    printf("\nInput the fifth number: "); 
    scanf("%d", &numbers[4]);
	for(p = 0; p < 5; p++) {
		if((numbers[p]%2) != 0) 
		{
		   total += numbers[p];
		}	
    }
   	printf("\nSum of all odd values: %d", total);
	printf("\n");
	return 0;
}
