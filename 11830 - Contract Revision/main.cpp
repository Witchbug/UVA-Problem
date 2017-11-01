#include <iostream>

using namespace std;

int main()
{
    string b;
    int a,i,temp,j,len,flag;
    while(cin>>a, getline(cin,b))
    {
        if(a==0 && (b[1]-'0')==0)
            break;
        if(a==0)
            continue;
        len=b.length();
       for(j=1;b[j];j++)
        {
           if((b[j]-'0')==a)
            continue;
           else if((b[j]-'0')!=0)
           {
               break;
           }
        }
        if(j==len && (b[j-1]-'0')==0)
            j-=1;
        flag=1;
        for(i=j;b[i];i++)
        {
            if((b[i]-'0')!=a)
            {
                cout<<b[i];
                flag=0;
            }

        }
        if(flag)
                cout<<"0";
        cout<<endl;
    }
    return 0;
}
