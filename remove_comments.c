#include<stdio.h>
int main(void)
{
	char b[100],c;
	int flag,f;
	f=0;
	while((c=getchar())!=EOF)
	{
		if(c=='/')
		{
			c=getchar();
			if(c=='/')
			{
				f=1;
				scanf("%[^\n]",b);
			}
			if(c=='*')
			{
				f=1;
				flag=0;
				while(flag!=1)
				{					
				scanf("%[^*]",b);
				c=getchar();
				c=getchar();
				if(c='/')
					flag=1;
				}
			}
		}
		if(f!=1)
			putchar(c);
		else
			f=0;
	}
	return 0;
}


