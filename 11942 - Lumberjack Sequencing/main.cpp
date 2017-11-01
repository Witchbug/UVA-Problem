#include <iostream>
using namespace std;
main()
{
    int no,len[9],i,j;
    bool check;
    cin>>no;
    cout<<"Lumberjacks:"<<endl;
    while(no--)
    {
        for(i=0;i<=9;i++)
        {
            cin>>len[i];
        }
        if(len[0]<len[1])
        {
            for(i=0;i<=8;i++)
            {
                if(len[i]<=len[i+1])
                {
                   check=true;
                }

                else
                {
                   check=false;
                   break;
                }
            }
        }
        else
        {
            for(i=0;i<=8;i++)
            {
                if(len[i]>=len[i+1])
                {
                   check=true;
                }
                else
                {
                   check=false;
                   break;
                }
            }
        }
        if(check)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;
    }
    return 0;
}
