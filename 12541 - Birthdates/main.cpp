#include <iostream>

using namespace std;

int main()
{
    string name[104];
    int n,i,dd[104],mm[104],yy[104],max_store,min_store,d,m,age;
    cin>>n;
    max_store=1;
    min_store=1;
    for(i=1; i<=n; i++)
    {
        cin>>name[i]>>dd[i]>>mm[i]>>yy[i];
    }
    for(i=1; i<=n; i++)
    {
        if(yy[i]==yy[max_store])
        {
            if(mm[i]==mm[max_store])
            {
                if(dd[i]<dd[max_store])
                    max_store=i;
            }
            else if(mm[i]<mm[max_store])
                max_store=i;
        }
        else if(yy[i]<yy[max_store])
            max_store=i;

        if(yy[i]==yy[min_store])
        {
            if(mm[i]==mm[min_store])
            {
                if(dd[i]>dd[min_store])
                    min_store=i;
            }
            else if(mm[i]>mm[min_store])
                min_store=i;
        }
        else if(yy[i]>yy[min_store])
            min_store=i;
    }

    cout<<name[min_store]<<endl<<name[max_store]<<endl;
    return 0;
}
