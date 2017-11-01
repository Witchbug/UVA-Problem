#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string a;
    int i,j,k,first,len,nospace;
    while(getline(cin,a))
    {
        nospace=0;
        k=-1;
        first=1;
        len=a.length()+1;
        for(i=0;i<len;i++)
        {
            if(a[i]==' ')
            {
                    nospace=1;
                   break;
            }

        }
        for(i=0;i<len;i++)
        {
            if(a[i]==' ' || a[i]== NULL)
            {
                if(a[i]== NULL)
                {
                    if(nospace)
                        cout<<" ";
                    first=1;
                }

                for(j=i;j>k;j--)
                {
                   if(first)
                   {
                       j-=1;
                       first=0;
                   }
                   cout<<a[j];
                }
                    k=i;
            }
        }
        cout<<endl;
    }
    return 0;
}
