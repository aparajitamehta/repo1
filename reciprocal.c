#include<stdio.h>
int main(void)
{
	float A,C,x,e=000.000000000000000001;
	scanf("%f",&x);
	C=(1-x);
	A=1;
	while((C*C)>=e)
	{
		A=A*(1+C);
		C=C*C;
	}
	printf("%f\n",A);
return 0;
}


