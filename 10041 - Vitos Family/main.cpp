#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int r,n,rd[501],i,sum1,sum2,j,mini;
    cin>>n;
    while(n)
    {
        cin>>r;
        for(i=0; i<r; i++)
        {
            cin>>rd[i];
        }
        sum1=0;
        for(j=0; j<r; j++)
        {
            sum1+=abs(rd[0]-rd[j]);

        }
        mini=sum1;

        for(i=1; i<r; i++)
        {
            sum2=0;
            for(j=0; j<r; j++)
            {
                sum2+=abs(rd[i]-rd[j]);

            }
            if(sum2<mini)
                mini=sum2;
        }
        cout<<mini<<endl;
        n--;
    }

    return 0;
}
