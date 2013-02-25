#include<stdio.h>
main()
{
	int i;
	for(i=0;i<=300;i+=20)
	{
		printf("%3d%7d\n",i,9*i/5+32);
	}
}
