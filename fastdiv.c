# include<stdio.h>
int main(){
          int w,x,y,q,r;
	  scanf("%d %d",&x,&y);
          r=x;
	  w=y;
	  while(w<=r){
	              w=w*2;
		     }
          while(w!=y){
	              q=q*2;
		      w=w/2;
                      if(w<=r){
		               r=r-w;
			       q=q+1;
			      }
                      }
	printf("Quotient %d  Remainder %d ",q,r);
return 0;
          } 
