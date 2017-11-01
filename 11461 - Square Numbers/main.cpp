#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long i,a,b,root;
    float dot;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        int count=0;
        for(i=a;i<=b;i++)
        {
           dot=sqrt(i);
           root=dot;
            if((dot-root)==0.0)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
