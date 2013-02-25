#include<stdio.h>
int fib(int n);
int main(void)
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",fib(i));
	}
	return 0;
}
int fib(int n)
{
	int a;
	if(n==1)
		return 0;
	if(n==2)
		return 1;
	else
		return (fib(n-1)+fib(n-2));
}
	
	

