#include<stdio.h>
#define OUT 0
#define IN 1
int main(void)
{
	int a[11]={0};
	int b[100][11]={0};
	int max,k,len,state,c,j,i;
	state=OUT;
	while((c=getchar())!=EOF)
	{
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
		{
			if(state==OUT)
			{
				state=IN;
				len=0;
			}
			len++;
		}
		else if(state==IN)
		{
			a[len]++;
			state=OUT;
		}
	}
	max=a[1];
	for(i=2;i<11;i++)
		if(a[i]>max)
			max=a[i];
	for(i=1;i<11;i++)
	{
		for(j=(max-1);j>=(max-a[i]);j--)
			b[j][i]=-1;
		b[max][i]=i;
	}
	for(i=0;i<=max;i++)
	{
		for(j=1;j<11;j++)
		{
			if(b[i][j]==0)
				printf("  ");
			else if(b[i][j]==-1)
				printf("* ");
			else
			{
				printf("%d ",b[i][j]);
			}
		}	
		printf("\n");
	}

	return 0;
}




