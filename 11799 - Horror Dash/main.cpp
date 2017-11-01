#include <iostream>

using namespace std;

int main()
{
    int no,stdn,a[10001],maxi,count=1,i;
    cin>>no;
    while(no)
    {
        maxi=0;
        cin>>stdn;
        for(i=1;i<=stdn;i++)
        {
            cin>>a[i];
            if(a[i]>maxi)
                maxi=a[i];
        }
        cout<<"Case "<<count<<": "<<maxi<<endl;
        count++;
        no--;
    }
    return 0;
}
