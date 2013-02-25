#include<stdio.h>
int main(void)
{
	int i,k,t,j,l,m,n,z,o,p[100],q[100],product[100][100][100]={0};
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int a[100][100][100];
		scanf("%d",&k);
		for(m=0;m<k;m++)
		{
			scanf("%d %d",&p[m],&q[m]);
			for(j=0;j<p[m];j++)
			{
				for(l=0;l<q[m];l++)
				{
					scanf("%d",&a[m][j][l]);
				}
			}
		}
		int x=0;
		for(m=0;m<(k-1);m++)
		{
			if(q[m]!=p[m+1])
			{   x=-1;
			printf("%d\n",x);
			m=k;
			}
		}
		if(x==0)
		{  for(z=0;z<(k-1);z++)
		{
			for(l=0;l<p[z];l++)
			{
				for(m=0;m<q[z+1];m++)
				{
					for(n=0;n<q[0];n++)
					{
						product[0][l][m]+=a[z][l][n]*a[z+1][n][m];
					}
				}
			}
		}


		for(j=0;j<p[0];j++)
		{
			for(l=0;l<q[1];l++)
			{
				printf("%d ",product[0][j][l]);
			}
			printf("\n");
		}
		}
	}
	return 0;
}










