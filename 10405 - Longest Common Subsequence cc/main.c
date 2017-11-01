#include <stdio.h>
#include <string.h>


int main()
{
    char s1[1001],s2[1001];
    int i,j,x,y,lcs[1001][1001];
    while(gets(s1))
    {
        gets(s2);
        x=strlen(s1);
        y=strlen(s2);
        for(i=0; i<=x; i++)
        {
            lcs[i][0]=0;
        }
        for(i=0; i<=y; i++)
        {
            lcs[0][i]=0;
        }
        for(i=1; i<=x; i++)
        {
            for(j=1; j<=y; j++)
            {
                if(s1[i-1]==s2[j-1])
                    lcs[i][j]=lcs[i-1][j-1]+1;
                else if(lcs[i][j-1]>lcs[i-1][j])
                    lcs[i][j]=lcs[i][j-1];
                else
                    lcs[i][j]=lcs[i-1][j];

            }
        }
        printf("%d\n",lcs[x][y]);
    }


    return 0;
}
