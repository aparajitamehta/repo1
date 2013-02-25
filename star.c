#include<stdio.h>
int main(void)
{
	int i,j,k,i1,j1,k1;
	for(i=1;i<=4;i++)
	{
		j=1;
		while(j<=(4-i))
		{
			printf(" ");
			j=j+1;
		}
		k=1;
		while(k<=(2*i-1))
		{
			printf("*");
			k=k+1;
		}
		printf("\n");
	}
	for(i1=3;i1>=1;i1--)
	{
		j1=1;
		while(j1<=(4-i1))
		{
			printf(" ");
			j1=j1+1;
		}
		k1=1;
		while(k1<=(2*i1-1))
		{
			printf("*");
			k1=k1+1;
		}
		printf("\n");
	}
	return 0;
}
