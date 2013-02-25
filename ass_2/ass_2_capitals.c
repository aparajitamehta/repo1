/*i dont feel lyk commenting buh still... program to change to upper case
by vanshika
created sun sep 9 8:34 pm*/
#include<stdio.h>
int main(){
    int test,aux=0;
    scanf("%d\n",&test);
    while(aux<test){
       int c;
       c=getchar();
       while(c!='\n'){
       if(c>=97 && c<=122)
       c=c-32;
       else
       c=c+0;
       putchar(c);
       c=getchar();}
       printf("\n");
       aux++;}
    return 0;
    }
