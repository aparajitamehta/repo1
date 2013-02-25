#include<stdio.h>
int board[100][100];
int n;
int issafe(int i,int j)
{
	int flag=1,k,u,v;
	for(k=0;k<n;k++)
	{
		if(board[i][k]==1||board[k][j]==1)
		{
			flag=0;
			return 0;
		}
	}
	u=i;
	v=j;

	while(u>=0&&v>=0&&flag!=0)
	{
		u--;
		v--;
		if(board[u][v]==1)
			return 0;
		flag=0;
	}
	u=i;
	v=j;
	while(u<n&&v<n&&flag!=0)
	{
		u++;
		v++;
		if(board[u][v]==1)
			return 0;
		flag=0;
	}

	if(flag==1)
		return 1;
}
int put_one_more_queen(int how_many_more)
{

	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if (board[i][j]==0 && issafe(i,j)==1)
			{
				board[i][j]=1;                  //put the queen there
				if(how_many_more==1)            //base case
				{
					for(i=0;i<n;i++)
					{
						for(j=0;j<n;j++)
						{
							printf("%d",board[i][j]);
						}
						printf("\n");
					}               //got solution
					return 1;                       //inform calling function that we got soulution
				}
				else
				{
					int ret;
					ret=put_one_more_queen(how_many_more-1);  //the recursion
					if(ret==1)              //called function returns a 1 on finding the solution
					{
						return 1;               //recursively return 1 to all calling parents
					}
				}
			}
			board[i][j]=0;          //no success with(i,j)
			//remove the queen , try next safe position 
			return 0;               //no success tell calling function that i failed
		}
	}
}
int main(void)
{
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			board[i][j]=0;//no queens initially
		}
	}
	put_one_more_queen(n);
	return 0;
}


~                                                                       
