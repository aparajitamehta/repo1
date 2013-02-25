#include<stdio.h>
int main(){
	int a,b,i,t;
	long long int m;
	scanf("%d",&i);
	while(i>0){
		m=0;
		scanf("%d%d",&a,&b);
		if(a>b){
			t=a;
			a=b;
			b=t;}
		while(a>0){
			m=(m+b)%100000;
			printf("%lld\n",m);
			a--;
		}
		printf("%lld\n",m);
		i--;
	}
	return 0;
}
