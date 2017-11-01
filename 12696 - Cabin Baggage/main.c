#include<stdio.h>
#include<string.h>
int main()
{

    double l,w,d,m;
    int n,cnt;
    cnt=0;
    scanf("%d",&n);
    while(n)
    {
        scanf("%lf %lf %lf %lf",&l,&w,&d,&m);
        if(((l<=56 && w<=45 && d<=25) || ((l+w+d)<=125)) && (m<=7))
        {
            printf("1\n");  cnt++;
        }
        else
            printf("0\n");
        n--;
    }
    printf("%d\n",cnt);
    return 0;
}
