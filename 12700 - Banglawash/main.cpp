#include <iostream>

using namespace std;

int main()
{
    string s;
    int tt,n,i,b,w,t,a,cnt,na;
    cin>>tt;
    cnt=1;
    while(tt--)
    {
        cin>>n>>s;
        b=0;
        w=0;
        t=0;
        a=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='B')
             b++;
            else if(s[i]=='W')
                w++;
            else if(s[i]=='T')
                t++;
            else if(s[i]=='A')
                a++;

        }
        na=n-a;
        if(a==n)
            cout<<"Case "<<cnt<<": ABANDONED"<<endl;
        else if(b==na)
            cout<<"Case "<<cnt<<": BANGLAWASH"<<endl;
        else if(w==na)
            cout<<"Case "<<cnt<<": WHITEWASH"<<endl;

        else if(b>w)
            cout<<"Case "<<cnt<<": BANGLADESH "<<b<<" - "<<w<<endl;
        else if(w>b)
            cout<<"Case "<<cnt<<": WWW "<<w<<" - "<<b<<endl;
        else if(w==b)
            cout<<"Case "<<cnt<<": DRAW "<<w<<" "<<t<<endl;
        cnt++;

    }
    return 0;
}
