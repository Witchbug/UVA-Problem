#include <iostream>

using namespace std;

int main()
{
    int t,n,k,p,i,cnt;
    cin>>t;
    cnt=1;
    while(t--)
    {
        cin>>n>>k>>p;
        i=k;
        while(p--)
        {
           i++;
           if(i==n+1)
            i=1;
        }
        cout<<"Case "<<cnt<<": "<<i<<endl;
        cnt++;

    }
    return 0;
}
