#include<stdio.h>
int main()
{
	char buff[1000],c;
	while(scanf("%[^\n]",buff)!=EOF)
	{
		scanf("%c",&c);
		int i=0;
		while(buff[i]!='\0')
		{
			i++;
		}
		printf("%d\n",i);
	}
	return 0;
}
