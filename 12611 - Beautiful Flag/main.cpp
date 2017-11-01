#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int c,t,w,l1,l2,cnt;
    cin>>t;
    cnt=1;
    while(t--)
    {
        cin>>c;
        w=(c*1.5);
        l1=(c*2.25);
        l2=ceil(l1*1.222222);
        printf("Case %d:\n",cnt);
        printf("-%d %d\n",l1,w);
        printf("%d %d\n",l2,w);
        printf("%d -%d\n",l2,w);
        printf("-%d -%d\n",l1,w);
        cnt++;
    }
    return 0;
}
