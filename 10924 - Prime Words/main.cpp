#include <iostream>

using namespace std;

int main()
{
    string word;
    int i,sum,flag;
    while(!(cin>>word).eof())
    {
        sum=0;
        for(i=0;word[i];i++)
        {
            if(word[i]>='A' && word[i]<='Z')
            {
                sum=sum+(word[i]-38);
            }
            else
                 sum=sum+(word[i]-96);
        }
        flag=1;
        for(i=2;i<sum;i++)
        {
            if(sum%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;

    }
    return 0;
}
