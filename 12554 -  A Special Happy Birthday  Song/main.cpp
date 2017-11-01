#include <iostream>

using namespace std;

int main()
{
    string name[100],h="Happy",b="birthday",t="to",y="you";
    int i,n,run,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>name[i];
    }
    run=16;
    while(1)
    {
       if(n>run)
            run+=16;
       else
         break ;
    }
    i=1;
    j=1;
    while(run)
    {
        if(j==1 || j==5 || j==9 || j==13)
        {
            cout<<name[i]<<": Happy"<<endl;
            i++; j++;
        }
        else if(j==2 || j==6 || j==10 || j==14)
        {
            cout<<name[i]<<": birthday"<<endl;
            i++; j++;
        }
        else if(j==3 || j==7 || j==11 || j==15)
        {
            cout<<name[i]<<": to"<<endl;
            i++; j++;
        }
        else if(j==4 || j==8 || j==16)
        {
            cout<<name[i]<<": you"<<endl;
            i++; j++;
        }
        else if(j==12)
        {
            cout<<name[i]<<": Rujia"<<endl;
            i++; j++;
        }
        if(j>16)
            j=1;
        if(i>n)
            i=1;
        run--;
    }

    return 0;
}
