#include <iostream>

using namespace std;

int main()
{

    double l,w,d,m,u=7.00;
    int n,cnt;
    cnt=0;
    cin>>n;
    while(n)
    {
        cin>>l>>w>>d>>m;
        cout<<u<<endl;
        if((l<=56.00 && w<=45.00 && d<=25.00) || ((l+w+d)<=125.00) && (m<=u))
        {
            cout<<"1"<<endl;  cnt++;
        }
        else
            cout<<"0"<<endl;
        n--;
    }
    cout<<cnt;
    return 0;
}
