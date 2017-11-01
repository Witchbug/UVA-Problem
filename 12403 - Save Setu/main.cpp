#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int don,n,amnt;
    string op;
    don=0;
    cin>>n;
    while(n)
    {
        cin>>op;
        if(op=="report")
            cout<<don<<endl;
        else if(op=="donate")
        {
            cin>>amnt;
             don+=amnt;
        }
        n--;
    }
    return 0;
}
