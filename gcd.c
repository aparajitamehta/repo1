# include<stdio.h>
int main()
    {int x,y,a,b,q,r,temp=0;
    printf("     The GCD Calculator\n Enter two numbers and I will find their GCD  ");
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    while(y!=0){
              q=x/y;
	      r=x%y;
	      x=y;
              y=r;
	       }
    printf("The GCD of %d and %d is %d",a,b,x);
return 0;
    }
