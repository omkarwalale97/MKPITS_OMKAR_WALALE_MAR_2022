#include<stdio.h>
#include<conio.h>
int main()
{
	int A,P,l,b,w,h;
	printf("enterl,b"); 
	scanf("%d%d",&l,&b);
	printf("enterh,w");
	scanf("%d%d",&h,&w);
	A=l*b;
	P=2*(l*b);
	printf("the result is =%d\t%d",A,P);
	getch();
	}
