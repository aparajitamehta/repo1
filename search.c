#include<stdio.h>
int main (void)
{
	int i,j,a[100],n,l,loc;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&l);
	loc=n;
	for(i=0;i<n;i++)
	{
		if(a[i]==l)
		{
			loc=i;
		}
	}
if(loc<n)
{printf("found at :%d",loc);
}
else
printf("not found");
return 0;
}

