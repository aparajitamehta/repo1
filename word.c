//program to find a word in astring and how many times it occurs
#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,count=0,flag;
	char b[100],c;
	char search[100];
	scanf("%s",search);
	while(scanf("%s",b)!=EOF)
	{
		flag=0;
		if(strlen(b)==strlen(search))
		{
			for(i=0;i<strlen(b);i++)
			{
				if(b[i]!=search[i])
				{
				flag=1;
				break;
				}
			}
			if(flag==0)
				count++;

		}
	}
	printf("%d\n",count);
	return 0;
}


