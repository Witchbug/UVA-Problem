#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string a;
    int i;
    while(getline(cin,a))
    {
        for(i=0;a[i];i++)
        {
            if(a[i]=='W')
            cout<<"Q";
            if(a[i]=='E')
            cout<<"W";
            if(a[i]=='R')
            cout<<"E";
            if(a[i]=='T')
            cout<<"R";
            if(a[i]=='Y')
            cout<<"T";
            if(a[i]=='U')
            cout<<"Y";
            if(a[i]=='I')
            cout<<"U";
            if(a[i]=='O')
            cout<<"I";
            if(a[i]=='P')
            cout<<"O";
            if(a[i]=='[')
            cout<<"P";
            if(a[i]==']')
            cout<<"[";
            if(a[i]=='\\')
            cout<<"]";
            if(a[i]=='S')
            cout<<"A";
             if(a[i]=='D')
            cout<<"S";
             if(a[i]=='F')
            cout<<"D";
             if(a[i]=='G')
            cout<<"F";
             if(a[i]=='H')
            cout<<"G";
             if(a[i]=='J')
            cout<<"H";
             if(a[i]=='K')
            cout<<"J";
             if(a[i]=='L')
            cout<<"K";
             if(a[i]==';')
            cout<<"L";
            if(a[i]=='\'')
            cout<<";";
            if(a[i]=='X')
            cout<<"Z";
            if(a[i]=='C')
            cout<<"X";
            if(a[i]=='V')
            cout<<"C";
            if(a[i]=='B')
            cout<<"V";
            if(a[i]=='N')
            cout<<"B";
            if(a[i]=='M')
            cout<<"N";
            if(a[i]==',')
            cout<<"M";
            if(a[i]=='.')
            cout<<",";
            if(a[i]=='/')
            cout<<".";
            if(a[i]==' ')
            cout<<" ";
            if(a[i]=='1')
            cout<<"`";
            if(a[i]=='2')
            cout<<"1";
            if(a[i]=='3')
            cout<<"2";
            if(a[i]=='4')
            cout<<"3";
            if(a[i]=='5')
            cout<<"4";
            if(a[i]=='6')
            cout<<"5";
            if(a[i]=='7')
            cout<<"6";
            if(a[i]=='8')
            cout<<"7";
            if(a[i]=='9')
            cout<<"8";
            if(a[i]=='0')
            cout<<"9";
            if(a[i]=='-')
            cout<<"0";
            if(a[i]=='=')
            cout<<"-";
        }
        cout<<endl;
    }
    return 0;
}
