# include<stdio.h>
int main(){
          float x,r=1,s=1,c=1;
	  scanf("%f",&x);
	  float eps=0.0000001;
	  while(r>eps){
	              r=r*x/c;
		      c=c+1;
		      s=s+r;
		      }
	 printf("%f\n",s);
	 return 0;
	 }


