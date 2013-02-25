#include<stdio.h>
//int k;
int min(int a,int b,int c)
{
    if(a<b)
    {
	if(c<a)
	    return c;
	else 
	    return a;
    }
    else
    {
	if(c<b)
	    return c;
	else
	    return b;
    }
}

int sum(int i,int j,int n,int m,int a[10][100],int p[1000])
{
    if(i==n-1&&j==m-1)
    {
	//	p[k++]=a[i][j];
	return a[i][j];
    }

    else if(i==0)
    {
	if(j==(m-1))
	    return a[i][j]+min((sum(i+1,0,m,n,a,p)),(sum(n,0,m,n,a,p)),(sum(i,0,m,n,a,p)));

	//	p[k++]=a[i][j];
	else
	    return a[i][j]+min((sum(i+1,j+1,m,n,a,p)),(sum(n,j+1,m,n,a,p)),(sum(i,j+1,m,n,a,p)));
    }
    else if(i==n-1)
    {
	//	p[k++]=a[i][j];
	return a[i][j]+min((sum(0,j+1,m,n,a,p)),(sum(i,j+1,m,n,a,p)),(sum(i-1,j+1,m,n,a,p)));
    }
    else if(j==m-1)
    {
	//	p[k++]=a[i][j];
	return a[i][j]+min((sum(i-1,0,m,n,a,p)),(sum(i,0,m,n,a,p)),(sum(i+1,0,m,n,a,p)));
    }
    else
    {
	//	p[k++]=a[i][j];
	return a[i][j]+min((sum(i+1,j+1,m,n,a,p)),(sum(i-1,j+1,m,n,a,p)),(sum(i,j+1,m,n,a,p)));
    }
}






int main(void)
{
    int s,n,m,i,j;
    int a[10][100],p[1000];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	    scanf("%d",&a[i][j]);
    s=sum(0,0,n,m,a,p);
    //  for(i=0;i<k;i++)
    //	printf("%d",p[i]);
    //  printf("\n");
    printf("%d\n",s);
    return 0;
}

