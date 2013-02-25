# include<stdio.h>
int main()
{     int n,i,j,k,l,m,o;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {for(k=2*n;k>2*i;k--)
     { printf(" ");}
      for(j=1;j<=(2*i)-1;j++)
     { printf("* ");}
      printf("\n");
      }
      for(l=1;l<=n;l++)
      {for(m=1;m<=2*l;m++)
      { printf(" ");}
       for(o=(2*n)-1;o>2*l;o--)
       {printf("* ");}
       printf("\n");
       }
      return 0;
}
