#include<stdio.h>
#include<stdlib.h>
int selectionsort(int *,int);
int selectionsort(int *arr,int n)
{
    int i,j,temp;
    for(i=0;i<(n-1);i++)
	for(j=i+1;j<n;j++)
	{
	    if(*(arr+i)>*(arr+j))                                                     {
		temp=*(arr+i);
		*(arr+i)=*(arr+j);
		*(arr+j)=temp;
	    }
	}
    return 0;
}

int main()
{
    int *arr,i,n;
    printf("Enter no. of terms\n");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));					                                                                             for(i=0;i<n;i++)
	scanf("%d",(arr+i));
    selectionsort(arr,n);									                                          printf("Sorted elements are\n");									                                                                                           for(i=0;i<n;i++)
	printf("%d\n",*(arr+i));
    return 0;
}

