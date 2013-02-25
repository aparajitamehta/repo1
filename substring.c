//program to find if st1 is a substring of string2
#include<stdio.h>
#include<string.h>
int main(void)
{
	char s1[100],s2[100];
	int i,m,n,cnt,len,c,flag,start,end;//strt address and end address are also printed
	scanf("%s%s",s1,s2);
	len=strlen(s2);
	cnt=0;//number of times substing occurs
	for(i=0;i<len;i++)
	{
		c=0;
		if(s2[i]==s1[c])
		{
			start=i;
			flag=0;
			m=i;
			n=0;
			while(s1[n]!='\0'&&flag!=1)
			{
				if(s2[m]==s1[n])
				{
					m++;n++;
				}
				else
					flag=1;
			}
			if(flag==0)
			{
				printf("FOUND START:%d END:%d\n",start+1,m);
				cnt++;
			}
		}
	}
	if(cnt==0)
		printf("NOT FOUND\n");
	return 0;
}



