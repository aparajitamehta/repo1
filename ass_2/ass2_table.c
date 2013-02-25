#include<stdio.h>
/*This program generates table of a given no. the first input will be no. of test cases.
Dated- Sunday,Sep 9,7:29 PM
By- Vanshika*/
int main(){
  int test,aux=0;
  scanf("%d",&test);
  while(aux<test){
        int tabland,aux1,c=1;
        scanf("%d",&tabland);
        while(c<=10){
              aux1=tabland*c;
              printf("%d*%d=%d\n",tabland,c,aux1);
              c++;}
        aux++;}
  return 0;}

