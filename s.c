#include<stdio.h>
int main()
{
long long int a,b,x,y;
int t,i=0,j=0;
scanf("%d",&t);
while (i<t)
 {
 scanf("%lld%lld",&a,&b);
 x=a;
 y=b;
 while (a>=b)
 {
 a=a-b;
 printf("%lld\n",a);
 j=j+1;
 }
 printf("%d%lld\n",j,a);
 i=i+1;
 j=0;
 }
return 0;
}
