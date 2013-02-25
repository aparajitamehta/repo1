#include<stdio.h>
int sum(int n);
int main()
{
	int a,b;
	scanf("%d",&a);
	b=sum(a);
	printf("%d\n",b);
	return 0;
}
int sum(int n)
{
	if(n==1)
		return 1;
	return sum(n-1)+n;
}
