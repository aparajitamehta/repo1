#include<stdio.h>
int main()
{
	int a,c=1;
	scanf("%d", &a);
	while (c<=a/2)
	{
		if(c%a==0)
		{
			printf("the number is not prime\n");
			c++;
		}
		else 
		{
			printf("the number is prime\n");
		}
	}
	return 0;
}

