# include<stdio.h>
int main()
   {float x,r=0,s=0,c=1;
   scanf("%f",&x);
   r=x;
   s=x;
   float eps=0.0000000001;
   while((r*r)>=eps)
      {r=(-1)*x*x*r/((c+1)*(c+2));
      c=c+2;
      s=s+r;
      }
   printf("%f",s);
   return 0;
}


