#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a,b,mini1,mini2;
    while(cin>>a>>b)
    {
        if(a==-1 && b==-1)
            break;
        mini1=abs(b-a);
        a<b ? mini2=(100-b)+a : mini2=(100-a)+b;
        mini1<mini2 ?  cout<<mini1<<endl : cout<<mini2<<endl;

    }
    return 0;
}
