#include <iostream>

using namespace std;

int main()
{
    string text;
    int i,check=1;
    while(getline(cin,text))
    {
        for(i=0;text[i];i++)
        {
            if(text[i]=='"')
            {
                if(check%2!=0)
                cout<<"``";
                else
                cout<<"''";
                check++;
            }
            else
            cout<<text[i];
        }
        cout<<endl;
    }
    return 0;
}
