//number of 1 in a number
#include<stdio.h>
int main(void)
{
	unsigned int x;
	scanf("%u",&x);
	int i,count=0;
	for(;x!=0;x=x>>1)
	{
		if(x&01)
			count++;
	}
	printf("%d\n",count);
	return 0;
}
