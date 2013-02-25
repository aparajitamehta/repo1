//lcm of 2 numbers
#include<stdio.h>
int main()
{
 int x,y,z,a,b,c,r,p,n=0;
scanf("%d",&p);
while(n<p)
{
scanf("%d%d",&a,&b);
x=a;
y=b;
while(y!=0)
{
r=x%y;
x=y;
y=r;
}
z=(a*b)/x;
printf("%d\n",z);
n=n+1;
}
return 0;
}
