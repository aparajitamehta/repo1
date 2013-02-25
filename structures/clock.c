#include<stdio.h>
typedef struct
{
	int sec;
	int min;
	int hour;
}CLOCK;
void inc(CLOCK* ck);
void print(CLOCK* ck);
int main(void)
{
	CLOCK ck1={57,59,23};
	int i;
	for(i=0;i<7;i++)
	{
		inc(&ck1);
		print(&ck1);
	}
	return 0;
}
void inc(CLOCK* ck)
{
	(ck->sec)++;
	if((ck->sec)==60)
	{
		(ck->sec)=0;
		(ck->min)++;
		if((ck->min)==60)
		{
			(ck->min)=0;
			(ck->hour)++;
			if((ck->hour)==24)
			{
				(ck->hour)=0;
			}
		}
	}
}
void print(CLOCK* ck)
{
	printf("%2d:%2d:%2d\n",ck->hour,ck->min,ck->sec);
	return;
}
	

	
