#include<stdio.h>
int main(void)
{
	int i,t;
	char d;
	scanf("%d",&t);
	d=getchar();
	for(i=0;i<t;i++)
	{
	char a[400],b[400],c;
		int l=0,m=0;
		while((c=getchar())!='\n')
		{
			if(c>='a'&&c<='z')
				a[l++]=c;
			else if(c!='('&&c!=')')
			b[m++]=c;
			else if(c==')')
				a[l++]=b[--m];
		}
		a[l]='\0';
		printf("%s\n",a);
	}
	return 0;
}





