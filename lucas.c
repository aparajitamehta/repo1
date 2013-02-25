#include<stdio.h>
int main(){
int a=1,b=3,i=0,c;
while(i<5)
{
printf("\n%d",a);
i=i+1;
c=a+b;
a=b;
b=c;
}
}

