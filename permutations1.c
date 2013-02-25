#include<stdio.h>
void swap(char *p,char *q){
	char c;
	c=*p;
	*p=*q;
	*q=c;
}
void perm(char *a,int m,int n)
{
	int i,j;
	if(m==n){
		for(i=0;i<=n;i++)
			printf("%d",a[i]);
	}
	else
	{
		for(j=n;j<=m;j++)
		{
			swap(&a[j],&a[n]);
			perm(a,m,n+1);
			swap(&a[j],&a[n]);
		}
	}
}
int main()
{
	char *a = "haia";
	perm(a,strlen(a)-1,0);
	return 0;
}
