#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int l,s,e,n,i,j;
	scanf("%d",&n);
	l=2*n-1;
	s=0;
	e=l-1;
	int a[l][l];
	while(n>0)
	{
		for(i=s;i<=e;i++)
		{
			for(j=0;j<=e;j++)
			{
			if(i==s||i<=e||j==s||j<=e)
			{
					a[i][j]=n;
			}
			}
		}
		s++;
		e--;
		n--;
	}
	for(i=0;i<=l;i++)
	{
		for(j=0;j<l;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
