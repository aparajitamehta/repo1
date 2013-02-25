#include<stdio.h>
main()
{
	int i,c;
for(i=1;i<=10;i++)
{
c=getchar() != EOF;
if(c==1)
printf("YES");
else if(c==0)
printf("NO");
}
}
