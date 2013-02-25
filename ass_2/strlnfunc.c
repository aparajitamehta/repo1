#include<stdio.h>
int lostr(char str[]);
int main()
{
	char buff[1000],c;
	while(scanf("%[^\n]",buff)!=EOF)
	{
		scanf("%c",&c);
		int i=lostr(buff);
		printf("%d\n",i);
	}
	return 0;
}
int lostr(char str[])
{
	int i=0;
	while(str[i]!='\0')
		i++;
	return i;
}
