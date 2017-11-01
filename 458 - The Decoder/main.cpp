#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    char coder;
    int i;
    while(getline(cin,a))
    {
        for(i=0;a[i];i++)
        {
            coder=a[i]-7;
            cout<<coder;
        }
        cout<<endl;
    }

    return 0;
}
