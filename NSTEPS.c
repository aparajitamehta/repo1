#include<stdio.h>
int main(void)
{
int n,i,x,y,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d%d",&x,&y);
if(x==y)
{
if(x%2==0)
printf("%d\n",2*x);
else
printf("%d\n",1+2*(x-1));
}
else if(x==(y+2))
{
if(x%2==0)
printf("%d\n",2*(x-1));
else
printf("%d\n",2*(x-1)-1);
}
else{
printf("No Number\n");
}
}
return 0;
}

