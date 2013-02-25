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
 while (j<a)
  {
  printf("%lld\n",b%100000);
  b=b+y;
  j=j+1;
  }
 printf("%lld\n",(b-y)%100000);
 i=i+1;
 j=0;
 }
return 0;
}
