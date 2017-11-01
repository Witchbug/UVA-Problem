#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t,n,age[10],i,mdl,cnt;
    cnt=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>age[i];
        }
        sort(age,age+n);
        if(n%2==0)
            mdl=(n/2)+1;
        else
        mdl=(n+1)/2;
        cout<<"Case "<<cnt<<": "<<age[mdl-1]<<endl;
        cnt++;
    }
    return 0;
}
