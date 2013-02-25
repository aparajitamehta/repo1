#include<stdio.h>
#include<string.h>
void perm(char*a,char*p,int *l,int j,int len)
{
    int i;
    if(j==len)
    {
	p[j]='\0';
	printf("%s\n",p);
    }
    else
    {
	for(i=0;i<len;i++)
	{
	    if(l[i]==0)
	    {
		p[j]=a[i];
		l[i]=1;
		perm(a,p,l,j+1,len);
		l[i]=0;
	    }
	}
    }
}


int main(void)
{
    int len;
    char p[100],a[100];
    scanf("%s",a);
    len=strlen(a);
    int l[100]={0};
    perm(a,p,l,0,len);
    return 0;
}
