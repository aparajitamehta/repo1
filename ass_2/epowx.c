/*i have already made this one just little to update
updated on sun sep 9 2012 11.52pm
by vanshika
arre han... it computes e to the power x
*/# include<stdio.h>
int main(){
int test,aux=0;
scanf("%d",&test);
while(aux<test){          
float x,r=1,s=1,c=1;
	  scanf("%f",&x);
	  float eps=0.0000001;
	  while(r>eps){
	              r=r*x/c;
		      c=c+1;
		      s=s+r;
		      }
	 printf("%0.4f\n",s);
         aux++;}
	 return 0;
	 }


