#include<stdio.h>
#include<stdlib.h>
int main()
{
	//TO allocate a a[m][n]
	//Think of it as m rows of n integers
	int m,n;
	scanf("%d%d",&m,&n);
	int **a; //A 2d pointer, points to m int* pointers
	a=(int**)malloc(m*sizeof(int*));
	//now each of the m int* pointers shd point to n ints
	int i;
	for(i=0;i<m;i++)
	{
		*(a+i)=(int*)malloc(n*sizeof(int));
	}
	//free in reverse order
	for(i=0;i<m;i++)
		free(*(a+i));
	free(a);
	return 0;
}

