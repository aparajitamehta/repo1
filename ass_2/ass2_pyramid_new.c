#include<stdio.h>
/*This program generates pyramid the first input will be no. of test cases, second the no of rows in a pyramid
Dated- Sunday,Sep 9,7:46 PM
By- Vanshika*/
int main(){
  int test,aux=0;
  scanf("%d",&test);
  while(aux<test){
     int rows,i,j,k,l,m,n;
     scanf("%d",&rows);
     for(i=0;i<rows;i++){
       if(i<10){ for(k=2*(rows-1);k>2*i;)
	{    printf("  ");
	k=k-2;}}
	if(i>=10){
	for(l=3*(rows-10);l>0;)
	{printf(" ");
	k=k-3;}}
        for(j=i;j>0;j--)
           printf("%d ",j);
        for(;j<=i;j++)
           printf("%d ",j);
        printf("\n");}
         aux++;}
  return 0;}

