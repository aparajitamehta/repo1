#include<stdio.h>
int main(void)
{
	float A,C,x,e=00.00000000000000001;
	scanf("%f",&x);
	C=1-x;
	A=x;
	while(C*C>=e)
	{
		A=A*(1+C/2);
		C=C*C*(3+C)/4;
	}
	printf("%f\n",A);
}

