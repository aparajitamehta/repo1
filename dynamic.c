#include<stdio.h>
#include<stdlib.h>
int main()
{
	//DYNAMIC memory allocation
	int n;
	scanf("%d",&n);
	//int a[n]; //WRONG
	int *a;
	a = (int*)malloc(n*sizeof(int));
	*(a+0)=1;
	a[1]=2;
	printf("%d %d \n",a[0],a[1]);
	//deallocate memory
	free(a); //must do this, else leads to memory leak
	int *b;
	int c=1;
	b=&c; //WILL GIVE SEGMENTATION FAULT!!

	free(b);
	return 0;
}

