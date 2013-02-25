# include<stdio.h>
int main()
{
int n,m=1;
scanf("%d",&n);
while(m<=n)

{
int q=0,w,y,r,x;
	scanf("%d%d",&x,&y);
	w=y;
	r=x;
	while(w<=r)
	{
		w=w*2;
}
		while(w!=y)
		{
			q=q*2;
			w=w/2;
			if(w<=r)
			{
				r=r-w;
				q=q+1;
			}
printf("%d\n",q);
		}	
printf("%d %d\n",q,r);
		
m=m+1;	
}
	return 0;
}
