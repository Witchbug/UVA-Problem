#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int sum,i,n,j,k;

    while(!(cin>>n>>k).eof())
    {
        sum=n;
        i=n;
        while(i>0)
        {
            i=n/k;
            j=n%k;
            sum=sum+i;
            n=i+j;
        }
        cout<<sum<<endl;
    }
    return 0;
}
