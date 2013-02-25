#include<stdio.h>
#include<string.h>
#include<math.h>
void gen(char a[]);
int a[100];
int res[100][100];
	int n;
	int r=0;
int main(void)
{
	int i,j,total;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	gen("");
	total=pow(n,n);
	for(i=0;i<total;i++)
	{
		for(j=0;res[i][j]!='\0';j++)
			printf("%d ",res[i][j]);
		printf("\n");
	}
	return 0;
}
void gen(char cur[])
{
	int i,j,len;
	len=strlen(cur);
	if(len==n)
	{
		for(i=0;i<n;i++)
			res[r][i]=cur[i];
		r++;
		return;
	}
	else
	{
		for(j=0;j<len;j++)
		{
			cur[len]=a[j];
			cur[len+1]='\0';
			gen(cur);
		}
	}
	return;
}



