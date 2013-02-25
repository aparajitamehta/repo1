/*print string and its length till eof*/
#include<stdio.h>
int main(){
	int c,i=0,m=0;
	char a[100];
	while((scanf("%[^\n]",a)!=EOF)
	{ i=0;
	m=0;
	while(a[i]!='\0')
	{m++;
	i++;}
	c=getchar();
	printf("%d",m);}
	return 0;
}
	

