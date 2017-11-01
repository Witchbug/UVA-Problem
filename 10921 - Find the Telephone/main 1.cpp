#include <iostream>

using namespace std;

int main()
{
    char word[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char map[]="22233344455566677778889999";
    string s;
    int i,j,flag;
    while(!(getline(cin,s)).eof())
    {
        for(i=0;s[i];i++)
        {
            flag=1;
            for(j=0;word[j];j++)
            {
                if(s[i]==word[j])
                {
                    cout<<map[j];
                    flag=0;
                }
            }
            if(flag)
               cout<<s[i];

        }
        cout<<endl;
    }
    return 0;
}
