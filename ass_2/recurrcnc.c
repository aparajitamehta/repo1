#include<stdio.h>
int func(int n);
int main()
{
	int a,b,c;
	scanf("%d",&a);
	for(c=0;c<a;c++)
	{
		b=func(c);
		printf("%d ",b);
	}
	printf("\n");
	return 0;
}
int func(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return func(n-1)+func(n-2);
}
