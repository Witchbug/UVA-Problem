#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string a;
    int i,count,len;
    while(getline(cin,a))
    {
        count=0;
        len=a.length();
        for(i=0;i<=len;i++)
        {
            if(((a[i]<'a' && a[i]>'Z') || a[i]<'A' || a[i]>'z') && ((a[i-1]>='a' && a[i-1]<='z') || (a[i-1]>='A' && a[i-1]<='Z')))
             count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
