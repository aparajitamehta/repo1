#include<stdio.h>
int main(){
	int j,a,t,i,fact;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
fact=1;
scanf("%d",&a);
for(i=1;i<=a;i++)
{
  fact=fact*i;
}
printf("%d\n",fact);
}
return 0;
}
