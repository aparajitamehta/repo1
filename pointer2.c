#include<stdio.h>
int main(void)
{
	int i,a[100]={0};
	int* p;
	p=a;
	for(i=0;i<12;i++)
	{
		printf("%u \n",p);
		p++;
	}
	p=&a[0];
	for(i=0;i<12;i++)
	{
		printf("%d\n",*p);
		p++;
	}
	return 0;
}
