#include<stdio.h>
int main()
{
	int T,i;
	int n,k,a[100000],b[100000],j,l,temp;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d",&n);
		scanf("%d",&k);
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		for(j=0;j<(n);j++)
		{
			if(j<(n-k))
			{
				b[j+k]=a[j];
			}
			else  
			{
				b[j-n+k]=a[j];
			}


		}
		for(j=0;j<(n);j++)
		{
			printf("%d ",b[j]);
		}
		printf("\n");
	}
	return 0;
}


