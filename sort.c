#include<stdio.h>
int main(void)
{
	int a[100],min,i,j,n,loc,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		loc=i;
		min=a[i];
		for(j=i;j<n;j++)
		{
		if(a[j]<min)
		{ 
			min=a[j];
			loc=j;
		}
		}
		t=min;
		a[loc]=a[i];
		a[i]=t;
	}
	 for(i=0;i<n;i++)
		    {
			   printf("%d ",a[i]);

		    }
	 return 0;
}


