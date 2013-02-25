#include<stdio.h>
int main(void)
{int n,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	float S,T,x,e=0.00000001;
	T=1;
	S=0;
	int i=1;
	scanf("%f",&x);
	while(T>=e)
	{
		S=S+T;
		T=T*x/i;
		i=i+1;
	}
	printf("%f\n",S);
}
	return 0;
}



