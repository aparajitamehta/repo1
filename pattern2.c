# include <stdio.h>
int main(){
        int i,j,k,l,m,n,p;
        scanf("%d",&p);
        for(i=1;i<=p;i++)
	   {for(k=2*(p-1);k>=2*(i-1);k--)
                 {printf(" ");}
            for(j=1;j<=(2*i)-1;j++)
	         {printf("* ");}
            printf("\n");}
        for(l=1;l<p;l++)
            {for(m=1;m<=(2*(l+1))-1;m++)
                 {printf(" ");}
             for(n=2*(p-1);n>(2*l)-1;n--)
                 {printf("* ");}
            printf("\n");}
        return 0;
	}
