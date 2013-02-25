#include<stdio.h>
int main()
{
	int i,j,k,l,n,r;
	scanf("%d %d %d",&i,&j,&n);
	int o[i][j];
        for(k=0;k<i;k++)
	{	for(l=0;l<j;l++)
		scanf("%d",&o[k][l]);}
	int p[j][n];
	int q[i][n];
        for(k=0;k<j;k++)
	{	for(l=0;l<n;l++)
		scanf("%d",&p[k][l]);}
       for(k=0;k<i;k++)
        
	{       for(l=0;l<n;l++)
		{
	        	q[k][l]=0;
		        for(r=0;r<j;r++)
			        q[k][l]+=o[k][r]*p[r][l];
		       printf("%d\t",q[k][l]);
		}
			printf("\n");
		
		
	}
       return 0;
}
	
