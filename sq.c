squeeze2(char s1[], char s2[])
{
	int i, j, k;
	int instr2 = 0;

	for(i = j = 0; s1[i] != '\0'; i++)
	{
		instr2 = 0;
		for(k = 0; s2[k] != '\0' && !instr2; k++)
		{
			if(s2[k] == s1[i])
			{
				instr2 = 1;
			}
		} 

		if(!instr2)
		{
			s1[j++] = s1[i];
		} 
	}
	s1[j] = '\0';
}

/* test driver */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int i ;
    char s1[20],s2[30];
	char *leftstr[] =
	{
	gets(st1);
	
	};
	char *rightstr[] =
	{
         gets(st2);
	};

	char buffer[32];
	size_t numlefts = sizeof leftstr / sizeof leftstr[0];
	size_t numrights = sizeof rightstr / sizeof rightstr[0];
	size_t left = 0;
	size_t right = 0;

	for(left = 0; left < numlefts; left++)
	{
		for(right = 0; right < numrights; right++)
		{
			strcpy(buffer, leftstr[left]);

			squeeze2(buffer, rightstr[right]);

			printf("[%s] - [%s] = [%s]\n", leftstr[left], rightstr[right], buffer);
		}
	}
	return 0;
}

