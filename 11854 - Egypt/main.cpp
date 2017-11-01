#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==0 && b==0 && c==0)
            break;
        if(((c*c)==((a*a)+(b*b))) || ((b*b)==((a*a)+(c*c))) || ((a*a)==((c*c)+(b*b))))
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
    return 0;
}
