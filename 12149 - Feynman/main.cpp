#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,i, sum;
    while(cin>>n)
    {
        if(n==0) break;
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum+=pow(i,2);
        }
        cout<<sum<<endl;
    }
    return 0;
}
