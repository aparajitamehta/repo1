#include<stdio.h>
int main(int argc,char*argv[])
{
	int nc=0,nw=0,nl=0;
	char c;
	int state=0;
	FILE* f1=fopen(argv[1],"r");
	if(f1==NULL)
		printf("no\n");
	else{
	while((c=fgetc(f1))!=EOF)
	{
		nc++;
		if(c=='\n')
			nl++;
		if(c==' '||c=='\t'||c=='\n')
		{
			if(state==1)
			state=0;
		}
		else
		{
			if(state==0)
			{nw++;
			state=1;
		}
		}
	}
	}
	printf("%d %d %d\n",nc,nl,nw);
	return 0;
}


