/* Enter your code here */
#include<stdio.h>
int val(int n,int a,int b,int m,int p1,int p2);
main()
{
	int p1,flag=0,p[100],t,i,p2,a,b,n,k,l,j;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		scanf("%d%d%d%d%d%d",&p1,&p2,&a,&b,&n,&k);

		p[1]=p1;
		p[2]=p2;
		for(i=3;i<=k;i++)
			p[i]=val(i,a,b,n,p1,p2);
		for(i=1;i<=k;i++)
			printf("%d\n",p[i]);
		for(i=1;i<k;i++)
		{
			if(i%2)
			{
				if(p[i]>p[i+1])
				{
					flag=1;
					break;
				}
			}
			if(!(i%2))
			{
				if(p[i]<p[i+1])
				{
					flag=1;
					break;
				}
			}
			count++;
		}
		l=count;
		if(flag==1)
		{

			int count=0;
			flag=0;
			for(i=1;i<k;i++)
			{
				if(i%2)
				{
					if(p[i]<p[i+1])
					{
						flag=1;
						break;
					}
				}
				if(!i%2)
				{
					if(p[i]>p[i+1])
					{
						flag=1;
						break;
					}
				}
				count++;
			}
			if(count>l)
				l=count;
		}

		printf("%d\n",l);
	}
}

int val(int n,int a,int b,int m,int p1,int p2)
{
	if(n==1)
		return p1;
	if(n==2)
		return p2;
	else
		return (a*val(n-1,a,b,m,p1,p2)+b*val(n-2,a,b,m,p1,p2))%m;
}










