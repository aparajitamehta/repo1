#include<stdio.h>
#include<string.h>
void reverse(char a[100]);
void copy(char to[],char from[]);
void append(char arr[],char c);

char rest[100];
int main(void)
{
	char a[100];
	scanf("%s",a);
	reverse(a);
	printf("%s\n",a);
	return 0;
}
void reverse(char a[])
{
	int i;
	if(strlen(a)==1)
		return;
	else
	{
		char first,rest[100];
		first=a[0];
		copy(rest,a);
		reverse(rest);
		for(i=0; rest[i]!='\0'; ++i) 
		{
			a[i] = rest[i];
		}
		a[i] = '\0';
		append(a,first);
	}

}
void copy(char to[100],char from[100])
{
	int i=1;
	while(from[i]!='\0')
	{
		to[i-1]=from[i];
		i++;
	}
	to[i-1]='\0';
	return;
}
void append(char a[100],char c)
{
	int i=0;
	while(a[i]!='\0')
		i++;
	a[i]=c;
	a[i+1]='\0';
	return;
}




