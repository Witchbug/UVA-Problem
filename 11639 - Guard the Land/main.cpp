#include <iostream>

using namespace std;

int main()
{
    int n,x1,x2,y1,y2,m1,m2,n1,n2,s_secure,w_secure,n_secure,count,a1,a2,b1,b2;
    cin>>n;
    count=1;
    while(n--)
    {
        cin>>x1>>y1>>x2>>y2;
        cin>>m1>>n1>>m2>>n2;


        if(((m1>=x1 && m1<=x2) && (n1>=y1 && n1<=y2)) || ((x1>=m1 && x1<=m2) && (y1>=n1 && y1<=n2)) || ((m2>=x1 && m2<=x2) && (n1>=y1 && n1<=y2)) || ((x2>=m1 && x2<=m2) && (y1>=n1 && y1<=n2)) || ((m1>=x1 && m1<=x2) && (n2>=y1 && n2<=y2)) || ((x1>=m1 && x1<=m2) && (y1>=n2 && y2<=n2)) || ((m1>=x1 && m1<=x2) && (n2>=y1 && n2<=y2)) || ((x1>=m1 && x1<=m2) && (y2>=n1 && y2<=n2)) || ((m1>x1 && m1<x2) && (n1<y1 && n2>y2)) || ((x1>m1 && x1<m2) && (y1<n1 && y2>n2)) || ((m2>x1 && m2<x2) && (n1<y1 && n2>y2)) || ((x2>m1 && x2<m2) && (y1<n1 && y2>n2)))
        {
            (x1>=m1) ? a1=x1 : a1=m1;
            (x2<=m2) ? a2=x2 : a2=m2;
            (y1>=n1) ? b1=y1 : b1=n1;
            (y2<=n2) ? b2=y2 : b2=n2;
            s_secure=((a2-a1)*(b2-b1));
        }
        else
            s_secure=0;

        w_secure=((((x2-x1)*(y2-y1))+((m2-m1)*(n2-n1)))-(2*s_secure));
        n_secure=10000-w_secure-s_secure;
        cout<<"Night "<<count<<": "<<s_secure<<" "<<w_secure<<" "<<n_secure<<endl;
        count++;

    }
    return 0;
}
