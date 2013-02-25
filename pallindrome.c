#include<stdio.h>
int main(void)
{
	int n,m,p=0,r;
	scanf("%d",&n);
	m=n;
	while(m!=0)
	{
		r=m%10;
		p=p*10+r;
		m=m/10;
	}
	if(n==p)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
