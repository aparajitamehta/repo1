#include<stdio.h>
int arr[100];
int cnt=0;
void powerset(int n,int inp[],int k,int i)
{
      int j;
	if(n==0)
	{
		printf("%d",cnt);
		arr[i]='\0';
		printf("%d",arr[i]);
		printf("\n");
		cnt++;
	}
	else
	{
		powerset(n-1,inp,k+1,i);
		arr[i]=inp[k];
		powerset(n-1,inp,k+1,i+1);
	}
}
int main()
{
	int n;
	int inp[4]={'1','3','2'};
	n=sizeof(inp)/sizeof(inp[0]);
	powerset(n,inp,i,k);
	return 1;
}

