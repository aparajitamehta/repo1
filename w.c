
#include<stdio.h>
int occurence(char *,int ,char *);
int main()
{
	char str[30],str1[20];

	int i,j=0,len,n=0;
	printf("enter the sentence\n");
	gets(str);
	printf("enter the word\n");
	gets(str1);
	for(i=0;str1[i]!='\0';i++);
	len=i--;
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i+1]==' ')||(str[i+1]=='\0'))
		{
			n=n+occurence((str+j),len,str1);
			j=i+2;
		}
	}
		if(n=0)
			printf("%d",Not found);
else
printf("%d",Found);
	return n;
}
int occurence(char *ptr,int m,char *ptr1)
{
	int i,count=0;
	for(i=0;i<=m;i++)
	{
		if(*(ptr+i)==*(ptr1+i))
		{
			count++;
		}
	}
	if((count)==m)
	{

		return 1;
	}
	else
	{
		return 0;
	}
}
