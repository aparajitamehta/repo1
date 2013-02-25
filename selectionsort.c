#include <stdio.h>
#define SIZE 4
int main ()
{
	int a[SIZE],i,j,min,x;
	for(i=0;i<=3;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=3;i++)
	{
		min=a[i];
		for(j=i+1;j<4;j++)
		{
			if(a[i]<min)
			{
				min=a[j];
			}
		}
		x=a[SIZE];
		a[SIZE]=a[i];
		a[i]=x;
	}
	for(i=0;i<4;i++)
		printf("%d ",a[i]);
	return 0;
}






