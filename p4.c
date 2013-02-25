# include<stdio.h>
int main()
{
         int n,m=1;
	 scanf("%d",&n);
	 while(m<=n)
	 {int a,b,c,d,e=0;
	 scanf("%d%d\n",&a,&b);
	 while(a!=0)
	 {
	 if(a%2=0)
	 {e=e+b;}
	 a=a/2;
	 b=b*2;}
printf("%d\n",e);

	 m=m+1;
	 }
return 0;
}
