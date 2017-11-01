#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    long long x,y,n,m,a,b,p;
    while(cin>>m)
    {
        if(m==0) break;
        n=ceil(sqrt(m));
        p=pow(n,2);
        a=p-n+1;
        if((p%2)!=0)
        {
            if(m<a)
            {
                x=n;
                b=a-m;
                y=n-b;
            }
            else if(m>a)
            {
                b=m-a;
                x=n-b;
                y=n;
            }
            else
            {
                x=n;
                y=n;
            }
        }
        else
        {
            if(m<a)
            {
                b=a-m;
                x=n-b;
                y=n;
            }
            else if(m>a)
            {
                b=m-a;
                y=n-b;
                x=n;
            }
            else
            {
                x=n;
                y=n;
            }
        }
    cout<<x<<" "<<y<<endl;



    }
    return 0;
}
