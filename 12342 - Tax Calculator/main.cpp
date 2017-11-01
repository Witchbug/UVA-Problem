#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n,t,cnt,tax,result;
    cin>>t;
    cnt=1;
    while(t--)
    {

        cin>>n;
        if(n<=180000)
            cout<<"Case "<<cnt<<": 0"<<endl;
        else
        {
            if(n<=480000)
            {
                n=n-180000;
                tax=ceil((10*n)/100.0);

            }
            else if(n<=880000)
            {
                n=n-480000;
                tax=30000+ceil((15.0*n)/100);

            }
            else if(n<=1180000)
            {
                n=n-880000;
                tax=30000+60000+ceil((double(20*n)/100.0));

            }
            else if(n>1180000)
            {
                n=n-1180000;
                tax=30000+60000+60000+ceil((double(25)*n)/100.0);
            }

            if(tax<2000)
            cout<<"Case "<<cnt<<": 2000"<<endl;
            else
                cout<<"Case "<<cnt<<": "<<tax<<endl;
        }

        cnt++;
    }
    return 0;
}
