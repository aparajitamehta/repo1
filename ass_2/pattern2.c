# include <stdio.h>
/*this program prints a diamond like structure using *; i actually created it during mid sem 1 exam as a part of practise but now i am rearranging and setting it acc. to the assignment qustion
created-date=mystery
updated-sun sep 9 8:19 pm
by vanshika
*/
int main(){
   int test,aux=0;
   scanf("%d",&test);
   while(aux<test){
        int i,j,k,l,m,n,p;
        scanf("%d",&p);
        for(i=1;i<=p;i++)
	   {for(k=p;k>i;k--)
                 {printf(" ");}
            for(j=1;j<=(2*i)-1;j++)
	         {printf("*");}
            printf("\n");}
        for(l=1;l<p;l++)
            {for(m=1;m<=l;m++)
                 {printf(" ");}
             for(n=2*(p-1);n>(2*l)-1;n--)
                 {printf("*");}
            printf("\n");}
        aux++;}
    return 0;
	}
