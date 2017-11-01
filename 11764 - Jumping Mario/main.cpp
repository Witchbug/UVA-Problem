#include <iostream>

using namespace std;

int main()
{
    int n,t,a,b,cnt,high,low;
    cnt=1;
    cin>>t;
    while(t--)
    {
        high=0;
        low=0;
        cin>>n;
        cin>>a;
        n--;
        while(n--)
        {
            cin>>b;
            if(a<b)
                high++;
            else if(a>b)
                low++;
            a=b;
        }
        cout<<"Case "<<cnt<<": "<<high<<" "<<low<<endl;
        cnt++;
    }
    return 0;
}
