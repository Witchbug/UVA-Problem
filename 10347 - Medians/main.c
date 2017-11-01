#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,area,s;
    while(scanf("%lf %lf %lf",&a,&b,&c) != EOF)
    {
        s=((a+b+c)/2);
        area=((4.0/3.0)*(sqrt(s*(s-a)*(s-b)*(s-c))));
        if(area>0)
            printf("%.3lf\n",area);
        else
        {
            area=-1;
           printf("%.3lf\n",area);
        }


    }

    return 0;
}
