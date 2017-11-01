#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float d,l,s;
    int t,x,y,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&r);
        d=sqrt(pow(x,2)+pow(y,2));
        l=r+d;
        s=r-d;
        printf("%.2f %.2f\n",s,l);
    }
    return 0;
}
