#include <stdio.h>
int p[1001];
int w[1001];

int knapsack(int n,int max_w)
{
    int i,j,ans[1001][1001],c,x;
    for(i=0; i<=n; i++)
    {
        ans[i][0]=0;
    }
    for(j=0; j<=max_w; j++)
    {
        ans[0][j]=0;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=max_w; j++)
        {
            if(j>=w[i])  c=p[i];
               else c=0;
            if((j-w[i])<0)
                x=0;
            else
                x=j-w[i];
            int a=(ans[i-1][x])+c;
            int b=ans[i-1][j];
            if(a>b)  ans[i][j]=a;
               else ans[i][j]=b;
        }
    }
    return ans[n][max_w];


}

int main()
{
    int n,max_w,i,j,g,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%d %d",&p[i],&w[i]);
        }
        scanf("%d",&g);
        int sum=0;
        for(i=1;i<=g;i++)
        {
            scanf("%d",&max_w);
            sum=sum+knapsack(n,max_w);
        }
        printf("%d\n",sum);


    }

    return 0;
}
