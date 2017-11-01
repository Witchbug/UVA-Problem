#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    int n,d,r,sum,total,i,m[102],e[102];
    while(cin>>n>>d>>r)
    {
        if(n==0 || d==0 ||r==0)
            break;

        for(i=0;i<n;i++)
        {
            cin>>m[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>e[i];

        }
        sort(m,m+n);
        sort(e,e+n,greater<int>());
        total=0;
        for(i=0;i<n;i++)

        {
            sum=m[i]+e[i];
            if(sum>d)
                total+=((sum-d)*r);

        }
        cout<<total<<endl;


    }
    return 0;
}
