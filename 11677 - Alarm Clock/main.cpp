#include <iostream>

using namespace std;

int main()
{
    int h1,h2,m1,m2,rh,rm;
    while(cin>>h1>>m1>>h2>>m2)
    {

        if(h1==0 && h2==0 && m1==0 &&m2==0) break;
        if( m2 < m1)
        {
            m2 = m2 +60;
            h1++;
        }
        if(h2 < h1)
        {
            h2 = h2 + 24;
        }

        rh = (h2-h1)*60;
        rm = m2-m1;

        cout<<rh+rm<<endl;


    }
    return 0;
}
