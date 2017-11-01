#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long x,n[10002],i,j;
    i=1;
    while(!(cin>>n[i]).eof())
    {
        j=i+1;
        sort(n,n+j);
        if(i%2==0)
        {
            x=i/2;
            cout<<(n[x]+n[x+1])/2<<endl;
        }
        else
        {
            x=(i+1)/2;
            cout<<n[x]<<endl;
        }
        i++;
    }
    return 0;
}
