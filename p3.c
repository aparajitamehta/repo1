# include<stdio.h>
int main()
{
	int n,m=1;
	scanf("%d",&n);
	while(m<=n)
	{
		long long int a,b,c=0,d;
		scanf("%lld%lld",&a,&b);
		while(a-b>0)
		{
			a=a-b;
			c=c+1;
			printf("%Ld\n",a);
		}
		
		printf("%Ld %Ld\n",c,a);
		m=m+1;
	}
	return 0;
}

