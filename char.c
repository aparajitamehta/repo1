/*count the number of characters in a given file*/
#include<stdio.h>
int main(void)
{
	int c;
	long int i=0;
	c=getchar();
	while(c!='\n')
	{
		i++;
		c=getchar();
	}
	printf("%ld\n",i);
	return 0;
}

