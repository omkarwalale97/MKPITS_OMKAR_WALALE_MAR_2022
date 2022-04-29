#include<stdio.h>
int main()
{
	int a[3],i;
	printf("enter 3 number\n");
	for(i=0;i<=2;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=2;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	
}
