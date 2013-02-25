#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,t;
	long long int n,u,k,m;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		u=1;
		m=0;
		k=1;
		while(u!=0)
		{
			u=(n/pow(5,k));
			k++;
			m=m+u;
		}
		printf("%lld\n",m);
	}
	return 0;
}


