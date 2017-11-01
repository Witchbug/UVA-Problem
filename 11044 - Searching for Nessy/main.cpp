#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int tt,t,n,m,x,y,ans;
    scanf("%d",&tt);
    for(t=1;t<=tt;t++)
    {
        scanf("%d %d",&n,&m);
        if((n-2)%3==0)
            x=n-2;
        else if((n-1)%3==0)
            x=n-1;
        else
            x=n;
        if(m<=5)
            y=1;
        else if((m-2)%3==0)
            y=m-2;
        else if((m-1)%3==0)
            y=m-1;
        else
            y=m;
        if(y==1)
           ans=(x*y)/3;
        else
            ans=(x*y)/9;
        printf("%d\n",ans);
    }
    return 0;
}
