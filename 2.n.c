/*This program shows a pyramid structure of given height as an output. SAUMYA GURTU 09.09.2012*/
#include <stdio.h>
int main ()
{
	int cases,test,line,m,numb,g;
	scanf("%d",&cases);
	for(test=0;test<cases;test++)//to repeat prog 4 every case.
	{
		scanf("%d",&numb);
		for(line=1;line<=numb;line++)//4 every printed line.
		{
			for(m=(numb-line);m>0;--m)//when is space to b printed 4 half pyramid.
			{
				printf("  ");
				if (line<numb && numb>10 && m+line>10 )
					printf(" ");
			}

			for(g=line-1;g>=0;--g)//print numbers 4 half pyramid.
			{
				printf("%d ",g);
			}
			for(g=1;g<line;g++)//print numbers 4 other half.
			{
				printf("%d ",g);
			}
			printf("\n");
		}
	}
	return 0;
}
