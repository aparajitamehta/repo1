# include<stdio.h>
int main(){
	int n,m=1;
	scanf("%d\n",&n);
	while(m<=n)
	{
	int a=0,b=1,c=0,d,e=1;
        scanf("%d",&d);
	while(e<d)
	{	c=a;
		a=b;
		b=c;
		a=(a+b)%100000;
                e=e+1;	}
		printf("%d\n",a%100000);
		m=m+1;
}return 0;
}
