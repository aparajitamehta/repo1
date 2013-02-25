//convert a number as a string s to an integer n
#include<stdio.h>
int main(void)
{
	int i,n;
	char s[100];
	n=0;
	scanf("%s",s);
	for(i=0;s[i]>='0'&&s[i]<='9';i++)
	{
	n=n*10+(s[i]-'0');
	}
	printf("%d\n",n);
	return 0;
}

	
