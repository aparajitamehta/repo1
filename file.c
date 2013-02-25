#include<stdio.h>
int main(int argc,char*argv[])
{
	FILE *f1;
	FILE *f2;
	char ch;
	f1=fopen(argv[1],"r");
	f2=fopen(argv[2],"w");
	if(f1==NULL||f2==NULL)
		printf("no\n");
	else{
	while(!feof(f1))
	{
		ch=fgetc(f1);
		if(!feof(f1))
		fputc(ch,f2);
	}
	}
	fclose(f1);
	fclose(f2);
	return 0;
}

