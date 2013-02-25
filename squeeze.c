#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int T,k=0,l=0,i,j,temp1,temp2;
    char s1[10000],s2[10000];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s%",s1);
        gets(s2 );
      //  printf("%s \n%s\n %d %d" , s1 , s2 , strlen(s1) , strlen(s2));
        k= strlen(s1);
        l = strlen(s2);
        temp2 = 0;
        for(j=0 ; j<l ; j++)
        {
            int presence = 0 ;
            for(i=0 ; i<k ; i++)
            {
                 if(s2[j]==s1[i])
                 {
                     presence = 1;
                     break;
                 }
             }
             if(presence == 0)
             {
                 s2[temp2] = s2[j];
                 temp2++;
             }
        }
        //printf("%d\n",strlen(s2));
        s2[temp2] = '\0';
        //printf("%d\n",strlen(s2));
        printf("%s\n" , s2);

    }
    return 0;
}
