# include <stdio.h>
int main()
{    float x,a,c,eps;
     eps=0.00000000001;
     scanf("%f",&x);
     a=x;
     c=1-x;
     while(c>eps)
              {//c=(c*c)*(3+c)/4;
	      a=a*(1+(c/2));
              c=(c*c)*(3+c)/4;
	      }
     printf("The square root of %f is %f",x,a);
     return 0;
}
