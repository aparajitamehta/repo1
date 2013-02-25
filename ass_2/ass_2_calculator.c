#include <stdio.h>
/*program for a simple calculator...
created on sun sep 9 2012 11.31 pm
by vanshika */
int main(){
   int test,aux=1;
   scanf("%d",&test);
   while(aux<=test){
       float op1,op2,ans;
       char op;
       scanf("%f%c%f",&op1,&op,&op2);
       if(op=='+')
       ans=op1+op2;
       if(op=='-')
       ans=op1-op2;
       if(op=='*')
       ans=op1*op2;
       if(op=='/')
       ans=op1/op2;
       printf("%0.2f\n",ans);
       aux++;}
   return 0;
 }
      

