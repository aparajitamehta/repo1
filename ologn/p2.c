#include<stdio.h>
int main(void)
{
	int p[100000],t,i,j;
	long long int k,val;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int X,Y,q,V,U,R,a[100000]={0};
		scanf("%d%d%d%d%d%d",&X,&Y,&q,&V,&U,&R);
		p[0]=U;
		p[1]=V;
		a[1]=1;
		for(j=2;j<100000;j++)
		{
			p[j]=(X*p[j-1]+Y*p[j-2])%q;

			if(p[j]==V&&p[j-1]==U)
			{	
				val=(j);
				break;
			}
		}

		printf("\n%lld val=",val);
		long long int d;
		for(j=0;j<R;j++)
		{
			scanf("%lld",&d);
			if(val<99998)
				printf("%lld\n",(d-1)%val);
			else
				printf("%d\n",-1);
		}
	}
	return 0;
}







