#include<stdio.h>
int a[100];
b[
void perm(int p[],int l[],int j,int a[],int d);
int main(void)
{
	int i,j,t,d;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&d);
		for(j=0;j<d;j++)
		{
			scanf("%d",&a[j]);
		}
		int p[100],l[100]={0};
		int j=0;
		perm(p,l,j,a,d);
	}
	return 0;
}
void perm(int p[],int l[],int j,int a[],int d)
{
	int i;
	if(j==(d))
	{
		for(i=0;i<d;i++)
		{
			printf("%d ",p[i]);
		}
		printf("\n");
	}
	else
	{
		for(i=0;i<d;i++)
		{
			if(l[i]==0)
			{
				p[j]=a[i];
				l[i]=1;
				perm(p,l,(j+1),a,d);
				l[i]=0;
			}
		}
	}
	return ;
}



