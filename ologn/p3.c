#include<stdio.h>
int main(void)
{
	int t,i,j,k,n,m,a[100000],b[100000],c[100000]={0};
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&n,&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[j]);
			scanf("%d",&b[j]);
		}
		int count=0;
		for(j=0;j<m;j++)
		{
			count++;
			int flag=0;
			c[a[j]]++;
			c[b[j]]--;
			for(k=1;k<=n;k++)
			{
				if(c[k]!=0)
				{
					flag=1;
					break;
				}
			}
			
			if(flag==0)
			{

				if(count%2==0)
					printf("yes\n");
				else
					printf("no:%d\n",count);
			}
		}
	}
	return 0;
}


