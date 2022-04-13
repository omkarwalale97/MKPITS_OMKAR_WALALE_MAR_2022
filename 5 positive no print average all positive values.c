#include <stdio.h>
#include <conio.h>
int main() 
{
	float numbers[5],total=0, avg;
	int m, pctr=0; 
	printf("\nInput the first number: "); 
    scanf("%f", &numbers[0]);
    printf("\nInput the second number: "); 
    scanf("%f", &numbers[1]);
    printf("\nInput the third number: "); 
    scanf("%f", &numbers[2]);
	printf("\nInput the fourth number: "); 
    scanf("%f", &numbers[3]);
    printf("\nInput the fifth number: "); 
    scanf("%f", &numbers[4]);
	for(m = 0; m < 5; m++) 
	{
		if(numbers[m] > 0)
		{
			pctr++;
			total += numbers[m];
		}	
    }
    avg = total/pctr;
	printf("\nNumber of positive numbers: %d", pctr);
	printf("\nAverage value of the said positive numbers: %.2f", avg);
	printf("\n");
	return 0;
}
