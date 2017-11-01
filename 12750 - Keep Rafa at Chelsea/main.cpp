#include <iostream>

using namespace std;

int main()
{
    char c;
    int t,w,count,n,cnt,flag,l,match;
    cin>>t;
    cnt=1;
    while(t--)
    {
        cin>>n;
        count=0;
        match=0;
        flag=1;
        while(n--)
        {
            cin>>c;
            if(c=='W')
                count=0;
            else
                count++;
            if(flag==1)
            {
                if(count==3) flag=0;
                match++;
            }
        }
        if(flag)
            cout<<"Case "<<cnt<<": Yay! Mighty Rafa persists!"<<endl;
        else
            cout<<"Case "<<cnt<<": "<<match<<endl;
        cnt++;
    }
    return 0;
}
