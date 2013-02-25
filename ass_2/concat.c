#include<stdio.h>
void concatn(char s1[],char s2[]);

int main()
{
	char str1[1000],str2[1000];
	while(scanf("%s%s",str1,str2)!=EOF)
	{
		concatn(str1,str2);
		printf("%s\n",str1);
	}
	return 0;
}
void concatn(char s1[],char s2[])
{
	int i=0,j,k=0;
	while(s1[i]!='\0')
		i++;
	while(s2[k]!='\0')
	{
		s1[i]=s2[k];
		i++;
		k++;
	}
	s1[i]='\0';
	return;
}

