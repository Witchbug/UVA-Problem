#include <iostream>

using namespace std;

int main()
{
    string s;
    int cnt=1;
    while(getline(cin,s))
    {
        if(s[0]=='*')
            break;
        else if(s=="Hajj")
            cout<<"Case "<<cnt<<": Hajj-e-Akbar"<<endl;
        else if(s=="Umrah")
            cout<<"Case "<<cnt<<": Hajj-e-Asghar"<<endl;
        cnt++;
    }
    return 0;
}
