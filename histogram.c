#include<stdio.h>
#define OUT 0
#define IN 1
int main(void)
{
	int a[11]={0};
	int len,state,c,j,i;
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
	
	for(i=1;i<11;i++)
	{
		printf("%d ",i);
		for(j=0;j<a[i];j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

				
	

