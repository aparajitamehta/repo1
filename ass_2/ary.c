#include<stdio.h>
#include<math.h>
int main(){
	double c=0,d,e=0,f;
	int a,b=0;
	scanf("%d",&a);
	int g[a];
	while(b<a)
	{
		scanf("%d",&g[b]);
                c=c+g[b];
		b++;
	}
	c=c/a;
	while(b>=0){
		d=(c-g[b])*(c-g[b]);
		e=e+d;
		b--;
	}
	e=e/a;
	e=sqrt(e);
	printf("mean=%lf\nstandatrd deviation=%lf",c,e);
	return 0;
}
