#include<stdio.h>
int main(void)
{
	unsigned int x;
	int count=0;
	scanf("%u",&x);
	while(x!=0)
	{
		if(x&1)
			count++;
		x=x>>1;
	}
	printf("%d\n",count);
	return 0;
}

