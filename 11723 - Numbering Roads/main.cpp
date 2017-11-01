#include <iostream>

using namespace std;

int main()
{
    long r,n,cnt,i,sum;
    cnt=1;
    while(cin>>r>>n)
    {
        if(r==0 && n==0)
            break;
        if(((n*26)+n)<r)
            cout<<"Case "<<cnt<<": impossible"<<endl;
        else
        {
            sum=0;
            for(i=0; ;i++)
            {
                sum+=n;
                if(sum>=r)
                    break;
            }
            cout<<"Case "<<cnt<<": "<<i<<endl;

        }
        cnt++;
    }
    return 0;
}
