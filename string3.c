
//text as input for each line print length of line
//print string till EOF along with its length
#include<stdio.h>
int main (void)
{
	char str[100],c;
	  int length,i;
	while(scanf("%[^\n]",str)!=EOF)
			{
				length=0;
				i=0;
				while(str[i]!='\0')
				{
					length++;
					i++;
				}				
				c=getchar();
				printf("%d\n",length);
			}
	return 0;
}

