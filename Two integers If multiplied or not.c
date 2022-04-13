#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b;
    printf("The values of a and b are:");
    scanf("%d %d", &a, &b);
    if(a % b == 0)
    {
        printf("Multiplied");
    }
    else
    {
        printf("Not multiplied");
    }
    return 0;
}
