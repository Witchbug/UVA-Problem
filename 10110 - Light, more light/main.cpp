#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long n,a;
    while(cin>>n)
    {
        if(n==0) break;
        a=sqrt(n);
        if((a*a)==n)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
