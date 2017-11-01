#include <iostream>

using namespace std;

int main()
{
    int l,w,h,t,v,vv,f,ff;
    while(cin>>t && t!=0)
    {
        ff=0;
        vv=0;
        while(t--)
        {
            cin>>l>>w>>h;
            f=h;
            v=l*w*h;
            if(f>ff || (f==ff && v>vv))
            {
               ff=f;
               vv=v;

            }
        }
        cout<<vv<<endl;
    }
    return 0;
}
