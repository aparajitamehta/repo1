#include<stdio.h>
int main(void)
{
	int a,n,i,sum=0;
	scanf("%d",&n);
	if(n>=0&&n<=5)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			sum+=a;
		}
		printf("%d\n",sum);
	}
	return 0;

}
