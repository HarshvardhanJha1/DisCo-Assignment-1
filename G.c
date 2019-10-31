#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int n;
void g (int m,int n)
{
	int j;
	for(int i=0;i<n;i++)
	{
		if((m|(1<<i))!=m)
			printf("%d ",(m|(1<<i)));
	}
}
int main()
{
	scanf("%d",&n);
	printf("%d ",n*(1<<(n-1)));
	printf("\n");
	for(int i=0;i<(1<<n);i++)
	{
		printf("%d : ",i);
		g(i,n);
		printf("\n");
	}
}