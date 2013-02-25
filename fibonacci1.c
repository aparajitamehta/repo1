#include<stdio.h>
int main(){
	long long int a=0,b=1,c=0,r=0;
	int flag=0,t,i=0,n;
	scanf("%d",&t);
	while(flag<t){
		a=0,b=1,c=0,r=0,i=0;
		scanf("%d",&n);
		while(i<n-1)
		{
			c=(a+b)%100000;
			a=b;
			b=c;	
			i=i+1;			
		}
		r=a%100000;
		printf("%lld\n",a);
		flag++;
	}
	return 0;
}
