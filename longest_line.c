#include<stdio.h>
#include<string.h>
int main(void)

{
	int c,len,i=0,max=0;
	char d,longest[100];
	char b[100];
	while((scanf("%[^\n]",b))!=EOF)
	{
		d=getchar();
		len=strlen(b);
		if(len>max)
		{
			max=len;
			for(i=0;i<max;i++)
				longest[i]=b[i];
			longest[i]='\0';
		}		
	}
	for(i=0;i<max;i++)
		printf("%c",longest[i]);
	printf("\n");
	return 0;
}



