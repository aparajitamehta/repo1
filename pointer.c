#include<stdio.h>
int main(void)
{
	int b=1;
	unsigned c;
	int* a;
	c=&a;
	a=&b;
	printf("%u\n%u\n",a,c);
	return 0;
}

