#include<stdio.h>
void swap(int*x,int* y);
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("%d\n%d\n",a,b);
	return 0;
}
void swap(int * x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}

