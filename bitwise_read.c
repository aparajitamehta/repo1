//read n bits from position p
#include<stdio.h>
int main(void)
{
	unsigned int a,b;
	int n,p;
	scanf("%u",&a);
	scanf("%d%d",&n,&p);
	b=(a>>(p-n+1)&~(~0<<n));
	printf("%u\n",b);
	return 0;
}

