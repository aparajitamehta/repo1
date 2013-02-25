//multiply 2 numbers z=a*b
#include<stdio.h>
int main()
{
   long long int x,j,p,a,b,q,z;
   j=0;
   z=0;
   scanf("%lld",&x);
    while(j!=x)
   {
     z=0;
     scanf("%lld%lld",&a,&b);
     p=b;
     q=a;
     while(p!=0)
    {
          if(p%2==1)
           {
              z=z+q;
              printf("%lld\n",q);
            }
       p=p/2;
       q=2*q;
    }   
      printf("%lld\n",z);
      printf("\n");
      j=j+1;
} 
  return 0;
}


