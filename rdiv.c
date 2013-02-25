#include<stdio.h>
int main(){
	int a,b,i,q,r;
	scanf("%d",&i);
	while(i>0){
		q=0,r=0;
		scanf("%d%d",&a,&b);

		while(a>b){
			a=a-b;
			printf("%d\n",a);
			q++;
		}
		printf("%d %d\n",q,a);
		i--;
	}
	return 0;
}
