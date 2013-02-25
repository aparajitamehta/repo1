#include<stdio.h>
int a[50000],l[50000],p[50000];
void next_perm(int j,int a[50000],int l[50000],int p[50000],int n)
{
    int i;
    if(j==n)
	return;
    else
    {
	for(i=0;i<n;i++)
	{
	    if(l[i]==0)
	    {
		p[j]=a[i];
		l[i]=1;
		next_perm(j+1,a,l,p,n);
		l[i]=0;
	    }
	}
    }
}
		


int main(void)
{
int t,i,n,k,j,m;
scanf("%d",&t);
for(i=0;i<t;i++)
{
   scanf("%d%d",&n,&k);
   for(j=0;j<n;j++)
       scanf("%d",&a[j]);
   for(j=0;j<k;j++)
   {
       for(m=0;m<n;m++)
       {	   l[m]=0;
	   p[m]=0;
       }
       
       next_perm(0,a,l,p,n);
       for(m=0;m<n;m++)
	   a[m]=p[m];

   }
   for(j=0;j<n;j++)
       printf("%d ",p[j]);
   printf("\n");
}
return 0;
}

    
