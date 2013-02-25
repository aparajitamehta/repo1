# include<stdio.h>
int main()
{
	int n,m=1;
	scanf("%d",&n);
	while(m<=n)
	{
	long long int a,b,c=1,d;
		scanf("%lld%lld",&a,&b);
		d=b;
		while(c<=a)
		{
			b=b%100000;
			d=d%100000;
			printf("%lld\n",b);
			b=b+d;
			c=c+1;
		}
		printf("%lld\n",(b-d));
		m=m+1;
	
	}
		
	return 0;
}
