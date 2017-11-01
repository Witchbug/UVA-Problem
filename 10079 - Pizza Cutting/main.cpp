#include <iostream>

using namespace std;

int main()
{
    long long int i,ans,n;
    while(cin>>n , n>=0 )
    {
        ans=1;
        for(i=0;i<=n;i++)
        {
            ans=ans+i;
        }
        cout<<ans<<endl;
    }
    return 0;
}
