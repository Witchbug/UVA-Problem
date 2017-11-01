#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long t,n,h[100005],i,m,check,cnt,k;
    cnt=1;
    cin>>t;
    while(t)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>h[i];
        }
        if(n==1)
            cout<<"Case "<<cnt<<": "<<h[0]<<endl;
        else
        {
            m=0;
            for(i=0; i<n-1; i++)
            {
                check=abs(h[i]-h[i+1]);
                if(check>m)
                    m=check;
            }
            k=m;

            for(i=0; i<n-1; i++)
            {
                if(i==0)
                {
                    if(h[0]>m)
                    {
                        k++;
                        m=k;
                        i=-1;
                        continue;
                    }
                    if(h[0]==m)
                        m--;

                }

                check=abs(h[i]-h[i+1]);
                if(check>m)
                {
                    k++;
                    m=k;
                    i=-1;
                    continue;
                }
                if(check==m)
                    m--;



            }
            cout<<"Case "<<cnt<<": "<<k<<endl;
        }

        cnt++;
        t--;

    }
    return 0;
}
