#include<stdio.h>
#include<string.h>
int main(void)
{
	char c,b[100];
	while(scanf("%s",b)!=EOF)
	{
	printf("%d ",strlen(b));
	printf("%s\n",b);
	}
	return 0;
}


