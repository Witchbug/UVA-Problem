#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int tt,t,nn,n,count,ans,flag,flag_c;
    char c;
    scanf("%d",&t);
    int cas=1;
    for(tt=1;tt<=t;tt++)
    {
        scanf("%d",&n);
        ans=0;
        count=0;
        flag=0;
        flag_c=1;
        for(nn=0;nn<=n;nn++)
        {
            scanf("%c",&c);
            if(c=='.')
            {
                if(flag_c)
                {
                    flag=1;
                    ans++;
                    flag_c=0;
                }
            }

            if(flag)
                count++;
            if(count==3)
            {
                flag=0;
                flag_c=1;
                count=0;
            }
        }
        printf("Case %d: %d\n",cas,ans);
        cas++;
    }
    return 0;
}
