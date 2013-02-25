#include<stdio.h>
int main()
{
long long int a,b,x,y;
int t,i=0,j=0;
char c;
scanf("%d",&t);
while (i<t)
 {
 scanf("%lld%c%lld",&a,&c,&b);
 x=a;
 y=b;
 while (a>=b)
 {
 a=a-b;
 printf("%lld\n",a);
 j=j+1;
 }
 printf("%d%c%lld\n",j,c,a);
 i=i+1;
 j=0;
 }
return 0;
}
