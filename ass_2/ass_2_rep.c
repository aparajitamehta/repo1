#include<stdio.h>
/*representaion of a no in any base
on mon sep 10 2012 12.30am
by vanshika
*/
int main(){
   int test,aux=0;
   scanf("%d",&test);
   while(aux<test){
      int no,base,aux1,a,b,c=1,s=0,x,y,z;
      scanf("%d %d",&no,&base);
      aux1=no;
      b=base;
      while(aux1!=0){
      a=aux1%base;
      printf("%d ",a);
      aux1=aux1/base;
      s++;
      }
      while(c<s-1){
      b=base*b;
      c++;}
      while(b!=base){
      x=no%b;
      printf("%d ",x);
      b=b/base;
      printf("\n");}
      aux++;}
return 0;}
