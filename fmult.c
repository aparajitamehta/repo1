#include<stdio.h>
int main(){
	int t,a,b,x,y;
	long long int z;
	scanf("%d",&t);
	while(t>0){
		z=0;
		scanf("%d%d",&a,&b);
		x=a;
		y=b;
		while(y!=0)
		{
			if(y%2!=0){
				printf("adding %d\n",x);
				z=z+x;}
				y/=2;
				x*=2;
		}
		if(a<0&&b>0&&z>0||a>0&&b<0&&z>0||a<0&&b<0&&z<0)
			z*=(-1);
		printf("%d\n\n",z);
		t--;
	}
	return 0;
}
