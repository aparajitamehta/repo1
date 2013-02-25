#include<stdio.h>
int cnt;
int a[50000],n,k;
void perm(int a[50000],int n,int k,int j,int p[50000],int l[50000]);
int main(void)
{
	int t,j,i,n,k;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		cnt=0;
		int p[50000], l[50000]={0};
		scanf("%d%d",&n,&k);
		if(n==1)
			k=k%1;
		if(n==2)
			k=k%2;
		if(n==3)
			k=k%6;
		if(n==4)
			k=k%24;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		perm(a,n,k,0,p,l);
	}
	return 0;
}
void perm(int a[50000],int n,int k,int j,int p[50000],int l[50000])
{
	int i;
	if(j==n)
	{
		if(cnt==k)
		{
			for(i=0;i<n;i++)
				printf("%d ",p[i]);
			printf("\n");
			return;
	}
	else
			cnt++;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(l[i]==0)
			{
			p[j]=a[i];
			l[i]=1;
			perm(a,n,k,j+1,p,l);
			l[i]=0;
			}
		}
	}
}



	




