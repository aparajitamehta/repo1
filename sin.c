#include<stdio.h>
int main(void)
{
	long double S,T,x,e=000.000000000000000000001;
	scanf("%Lf",&x);
		T=x;
	S=0;
	int i=1; 
	while((T*T)>=e)
	{
		S=S+T;
		T=-x*x*T/(i+1)/(i+2);
		i=i+2;
	}
	printf("%Lf",&S);
	return 0;
}


