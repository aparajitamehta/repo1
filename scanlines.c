#include<stdio.h>
int main(void)
{
char c,str[100];
while(scanf("%[^\n]", str)!=EOF)
{
printf("%s\n",str);
c=getchar();//to avoid infinite loop
}
//printf("%s",str);
return 0;
}
