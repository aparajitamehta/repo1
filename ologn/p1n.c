#include<stdio.h>
int main(void)
{
	int n,k,a,b,p1,p2,p[100],i,j,t,l,l1,l2,f,l1max,l2max;
	p[1]=p1;
	p[2]=p2;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		scanf("%d%d%d%d%d%d",&p1,&p2,&a,&b,&n,&k);
		for(i=3;i<=k;i++)
		{
			p[i]=(2*p[i-1]+3*p[i-2])%n;
		}
		l1max=0;
		l2max=0;
		l=1;
		f=0;
		for(i=1;i<k;i++)
		{
			if(i%2)
			{
				if(p[i]<p[i+1])
					l++;
				else 
					f=1;
			}
			else if(i%2==0)
			{
				if(p[i]>p[i+1])
					l++;
				else
					f=1;
			}
			if(f==1)
			{
				if(l>l1max)
				{
					l1max=l;
				}
				l=1;
				f=0;
			}
		}
		l1=1;
		f=0;
		for(i=1;i<k;i++)
		{
			if(i%2)
			{
				if(p[i]>p[i+1])
					l1++;
				else
					f=1;
			}
			else if(i%2==0)
			{
				if(p[i]<p[i+1])
					l1++;
				else
					f=1;
			}
			if(f==1)
			{
				if(l1>l2max)
				{
					l2max=l1;
				}
				l1=1;
				f=0;
			}   
		}   
		l2=(l1max>l2max)?l1max:l2max;
		printf("%d\n",l2);
	}
	return 0;
}

