#include<stdio.h>
int rev(int n)
{
	int m=0,t=n;
	while(t!=0)
	{
		m=m*10+t%10;
		t=t/10;
	}
	return m;
}

int main(void)
{
	int i,n,a,u,v,b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		u=rev(a);
		v=rev(b);
		printf("%d\n",rev(u+v));
	}
	return 0;
}

