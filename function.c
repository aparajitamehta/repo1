#include <stdio.h>
int add(int x,int y)
{
	int sum=x+y;
	return sum;
}
int main ()
{
	int a=4, b=5;
	int sum = add(a,b);
	printf("%d\n",sum);
	return 0;
}
