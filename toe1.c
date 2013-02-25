#include<stdio.h>
int main(void)
{
	int n,i,j,k;
	char a;
	int x,o;
	scanf("%d",&n);
	a=getchar();
	for(i=0;i<n;i++)
	{
		x=0;
		o=0;
		for(j=0;j<4;j++)
		{
			for(k=0;k<3;k++)
			{
				a=getchar();
				if(a=='X')
					x++;
				else if(a=='O')
					o++;
			}}
		if(i!=(n-1))
		a=getchar();
		if(x==o||(x-o)==1)
			printf("yes\n");
		else 
			printf("no\n");
	}
	return 0;
}




