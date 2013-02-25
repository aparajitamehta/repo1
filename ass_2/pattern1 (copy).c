# include<stdio.h>
int main()
         {int i,j,k,l,m,n;
         for(i=1;i<=4;i++)
                {
                for(m=3;m>=i;m--)
                {printf(" ");}
                for(j=1;j<=i;j++)
                        {printf("* ");
                        }
                printf("\n");
                }
         for(k=1;k<4;k++)
                {for(n=1;n<=k;n++)
		        {printf(" ");}
		for(l=3;l>=k;l--)
                        {printf("* ");
                        }
                printf("\n");
                }
        return 0;
        }

