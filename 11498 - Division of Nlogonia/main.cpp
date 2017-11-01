#include <iostream>

using namespace std;

int main()
{
    int k,n,m,x,y;
    while(cin>>k)
    {
        if(k==0) break;
        cin>>m>>n;
        while(k--)
        {
            cin>>x>>y;
            if(x==m || y==n)
                cout<<"divisa"<<endl;
            else if(x<m && y>n)
                cout<<"NO"<<endl;
            else if(x>m && y>n)
                cout<<"NE"<<endl;
            else if(x>m && y<n)
                cout<<"SE"<<endl;
            else
                cout<<"SO"<<endl;
        }
    }
    return 0;
}
