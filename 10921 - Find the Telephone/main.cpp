#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char s[50];
    int i;
    while(scanf("%s",&s)==1)
    {
        for(i=0;s[i];i++)
        {
                if(s[i]=='A' || s[i]=='B' || s[i]=='C')
                cout<<"2";
                if(s[i]=='D' || s[i]=='E' || s[i]=='F')
                cout<<"3";
                if(s[i]=='G' || s[i]=='H' || s[i]=='I')
                cout<<"4";
                if(s[i]=='J' || s[i]=='K' || s[i]=='L')
                cout<<"5";
                if(s[i]=='M' || s[i]=='N' || s[i]=='O')
                cout<<"6";
                if(s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S')
                cout<<"7";
                if(s[i]=='T' || s[i]=='U' || s[i]=='V')
                cout<<"8";
                if(s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z')
                cout<<"9";
                if(s[i]=='1')
                cout<<"1";
                if(s[i]=='0')
                cout<<"0";
                if(s[i]=='-')
                cout<<"-";

        }
        cout<<endl;
    }
    return 0;
}
