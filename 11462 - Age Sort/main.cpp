#include <iostream>
#include <algorithm>

using namespace std;
int age[2000002];

int main()
{
    int n,i;
    while(cin>>n)
    {
        if(n==0) break;
        for(i=0;i<n;i++)
        {
            cin>>age[i];
        }
        sort(age,age+n);
        cout<<age[0];
        for(i=1;i<n;i++)
        {
            cout<<" "<<age[i];
        }
        cout<<endl;
    }

    return 0;
}
