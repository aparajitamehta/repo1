# include<stdio.h>
int main()
{
	float x,s=1,c=1,d,f,g;
	float eps=0.000000001;
        scanf("%f",&x);
	while(c>eps)
		{
	              c=c*(1-x);
		      s=s+c;
		}
        printf("%f\n",s);
	return 0;
}
