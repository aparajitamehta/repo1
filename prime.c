#include<stdio.h>
int prime(int a);
int main()
{
	int i=500;
	int j=2;
	int a;
	int counter=1;
	while(i)
	{
		a=prime(j);
		if(a)
		{
			printf("%d ",j);
			i--;
		counter++;
		}
        if(counter>10)
		{printf("\n");
			counter=1;
		}

		j++;
	}
	return 0;
}
int prime(int z)
{
	int flag=1;
	int i=2;
	while((flag)&&(i<z))
	{
		if((z%i)==0)
			flag=0;
		i++;
	}
	if(flag)
		return 1;
	else
		return 0;
}

