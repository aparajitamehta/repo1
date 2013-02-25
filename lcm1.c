# include <stdio.h>
int main()
          {int n,k=1;
scanf("%d\n",&n);
while(k<=n)
          {int a,b,c,x,lcm,y;
	  scanf("%d%d",&a,&b);
	  x=a;
	  y=b;
	  while(y!=0){
	              c=x%y;
		      x=y;
		      y=c;}
		      lcm=a*b/x;
		      printf("%d\n",lcm);
		  k=k+1;    }

return 0;
}
		      
