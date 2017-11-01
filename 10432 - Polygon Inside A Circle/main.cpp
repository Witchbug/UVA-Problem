#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    double result,r,n;

    while(cin>>r>>n)
    {
        result=n*r*r/2*sin(2*M_PI/n);
        printf("%.3lf\n",result);
    }

    return 0;
}
