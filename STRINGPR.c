#include<stdio.h>
#include<string.h>
int main(void)
{
	int j,k,f,n,m,i,t;
	char c[30];
	scanf("%d",&t);

	for(j=0;j<t;j++)
	{
		scanf("%s",c);
		n=strlen(c);
		char d='\0';
		for(i=0;i<n;i++)
		{
			if(c[i]>='a'&&c[i]<='z')
			{
				for(k=0;k<=m;k++)
					putchar(d);
				m=0;
				d=c[i];
			}
			else 
			{
				m=m*10+(c[i]-'0');
			}
		}
		for(i=0;i<=m;i++)
			putchar(d);
		printf("\n");
	}
	return 0;
}


