#include<stdio.h>
int main(void)
{
	long long int a,b,x,y,n;
	scanf("%lld",&n);//enter the test cases
	int i=1;
	while(i<=n)
	{
		scanf("%lld%lld",&a,&b);//input the numbers to find lcm
		x=a;//assingn a and b to x and y
		y=b;
		while(x != y)//loop
		{
			if(x>y)
			{y=y+b;}
			else
			{x=x+a;}
		}
		printf("%lld\n",x);//print lcm
		i=i+1;
	}
}

