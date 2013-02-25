#include<stdio.h>
#include<string.h>
int main(int argc,char*argv[])
{
	int nc=0,nw=0,nl=0;
	char d,c[100];
	int state=0;
	FILE* f1=fopen(argv[1],"r");
	fseek(f1,0,SEEK_END);
	nc=ftell(f1);
	fseek(f1,0,SEEK_SET);

	if(f1==NULL)
		printf("no\n");
	else{

	while((fscanf(f1,"%s",c))!=EOF)
	{
		nw++;
	}
	fseek(f1,0,SEEK_SET);
	while((fscanf(f1,"%[^\n]",c))!=EOF)
	{nl++;
		d=fgetc(f1);
	}
	}
	printf("%d %d %d\n",nc,nl,nw);
	return 0;
}


