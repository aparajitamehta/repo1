#include<stdio.h>
int main(void)
{
	int i,c,f;
	for(i=0;i<=300;i=i+20)
	{
		printf("%d\t%d\n",i,5*(i-32)/9);
	}
	return 0;
}
