# include<stdio.h>
int main(){
          int n,m;
	  printf("     Factorial of a Number\nEnter the no. and I will tell you its factorial ");
	  scanf("%d",&n);
	  m=1;
	  while(n>0){
                    m=m*n;
                    n=n-1;
		     }
          printf("The factorial of the given number is %d \n ",m);
return 0;
         }
          
