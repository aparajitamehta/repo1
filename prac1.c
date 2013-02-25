# include<stdio.h>
int main()
         { int n,m=1;
scanf("%d",&n);
while(m<=n)

{int a,b,c=0,x,y;
scanf("%d%d",&x,&y);
b=x;
a=y;
while(a!=0)
{if(a%2!=0)
{c=c+b;
printf("adding %d\n",b);
}
a=a/2;
b=b*2;
}
m=m+1;
printf("%d\n\n",c);}
return 0;
}

