#include<stdio.h>
int main(void)
{
	char a[100];
	scanf("%[^\n]",a);
//this scans upto\n excluding \n
	printf("%s",a);
	return 0;
}
