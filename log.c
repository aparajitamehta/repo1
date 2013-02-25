#include<stdio.h>
int main(void)
{
	float arg,inc,s,x,e;
	scanf("%f",&arg);
	inc=0.693147180;
	s=0;
	e=0.0000000000001;
	x=arg;
	while(inc>e)
	{
		if((x*x)<2)
		{
			inc=0.5*inc;
			x=x*x;
		}
		if((x*x)>=2)
		{
			inc=0.5*inc;
			s=s+inc;
			x=0.5*x*x;
		}
	}
	printf("%f",s);
	return 0;
}


