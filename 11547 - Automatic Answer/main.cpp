#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long ans,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=((double(((double((n*567)/9.00)+7492)*235)/47.00))-498);
        ans=ans/10;
        ans=ans%10;
        cout<<abs(ans)<<endl;
    }
    return 0;
}
