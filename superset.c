#include<stdio.h>
#define NMAX 5
int o=0;
int finished=0;

is_solution(int a[], int n, int j)
{
    return (n == j);
}
process_solution(int a[], int p[],int k)
{
    int i;
    o++;
    if(o==32)
	finished=1;
    /* counter */
    printf("{");
    for (i=0; i<k; i++)
	if (p[i]) printf(" %d",a[i]);

    printf(" }\n");
}

void set(int a[NMAX],int n,int j,int p[NMAX])
{
    int c[2]={0,1};
    int ncandidates,i;
    if(is_solution(a,n,j))
	process_solution(a,p,j);
    else
    {
	
	for(i=0;i<2;i++)
	{
	    p[j]=c[i];
	    set(a,n,j+1,p);
	    if(finished)
		return;
	}
    }
}

int main(void)
{
    int i,a[NMAX],p[NMAX]={0};
    for(i=0;i<NMAX;i++)
    {
	scanf("%d",&a[i]);
    }
    set(a,NMAX,0,p);
    return 0;
}



