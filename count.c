//count the number of characters,words,lines in a program
#include<stdio.h>
#define IN 1
#define OUT 0
int main(void)
{
	int c,nc,nw,nl,state;
	state=OUT;
	nw=0;
	nc=0;
	nl=0;
	while((c=getchar())!=EOF)
	{
		nc++;
		if(c=='\n')
			nl++;
		if(c=='\n'||c=='\t'||c==' ')
			state=OUT;
		else if(state==OUT)
		{
			state=IN;
			nw++;
		}
	}
	printf("characters: %d \nwords:%d \nlines:%d\n",nc,nw,nl);
	return 0;
}
