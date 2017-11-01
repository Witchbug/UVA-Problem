#include<stdio.h>
int main()
{
    int t,i,j,k,l,a,f;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {

        scanf("%d %d",&a,&f);
        for(j=1; j<=f; j++)
        {
            for(k=1; k<=a; k++)
            {
                for(l=1; l<=k; l++)
                {
                    printf("%d",k);
                }
                printf("\n");
            }
            for(k=a-1; k>0; k--)
            {
                for(l=k; l>0; l--)
                {
                    printf("%d",k);
                }
                printf("\n");
            }
            if(j!=f)
            printf("\n");

        }
        if(i!=t)
        printf("\n");
    }
    return 0;
}
