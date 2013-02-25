#include<stdio.h>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,c,i;
		scanf("%d%d",&c,&n);
		int a[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		printf("%d %d \n",c,n/2+1);
		for(i=1;i<=n;i+=2)
		{
			sort(a,a+i);
			if(i%19==0)
				printf("%d \n",a[(i-1)/2]);
			else
				printf("%d ",a[(i-1)/2]);
		}
		if((i-2)%19)
			printf("\n");
	}
	return 0;
}
