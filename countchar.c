/*COUNT NUMBER OF CHARACTERS IN A FILE*/
#include<stdio.h>
int main(void)
{
	char buff[1000]="abg",c;
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


