#include<stdio.h>
int main(void)
{
	long long int z=0,x,y,u,v,n;
	scanf("%lld",&n);
	int i=1;
	while(i<=n)
	{
		z=0;
		scanf("%lld%lld",&x,&y);
		u=y;
		v=x;


		while(u!=0)
		{
			if(u%2 != 0)
			{
				z=z+v;
				printf("adding %lld\n\n",v);
			}
			v=2*v;
			u=u/2;
		}

		printf("%lld",z);
		i=i+1;
	}
	return 0;
}


