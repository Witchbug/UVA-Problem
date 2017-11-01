#include <iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,c,b[3001],a[3001],i,k;
    while(cin>>n)
    {
        c=1;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(n==1)
            goto here;
        for(i=0; i<n-1; i++)
        {
            b[i]=abs(a[i+1]-a[i]);
        }
        sort(b,b+i);
        k=1;
        for(i=0; i<n-1; i++)
        {
            if(b[i]==k)
            {

            }
            else
            {
                c=0;
                break;
            }
             k++;

        }
        here:
        if(c==0)
           cout<<"Not jolly"<<endl;
        else
            cout<<"Jolly"<<endl;
    }
    return 0;
}
