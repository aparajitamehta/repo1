#include<stdio.h>
int main()
{
	long long int n,f0,f1;
	scanf("%lld",&n);//input number of test cases
	int i=1;
	while(i<=n)
	{int j;
		scanf("%d",&j);
		 f0=0;
		 f1=1;
		if(j==1)
		{ 
			printf("%lld\n",f0);
		}
		else if(j==2)
		{
			printf("%lld\n",f1);
		}

		else if(j>2)
		{
			int k=2;
			while(k<j)
			{
				int temp;
				temp=f1%100000;
				f1=(f0+f1)%100000;
				f0=temp%100000;
				k=k+1;
				
			}
			  printf("%lld\n",f1);
		}
		i=i+1;
	}
	return 0;
}
